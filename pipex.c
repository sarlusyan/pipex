#include "pipex.h"

int     ft_print(char *str)
{
    write(2, str, ft_strlen(str));
    exit(0);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	i -= 1;
	while (i >= 0)
		free(arr[i--]);
}

void	fill_path(char *cmd, char **_cmd, char **path)
{
	int		i;
	char	*for_join;
	char	*new_one;

	i = 0;
	while (path[i])
	{
		for_join = ft_strjoin(path[i], "/");
		new_one = ft_strjoin(for_join, cmd);
		execve(new_one, _cmd, environ);
		free(for_join);
		free(new_one);
		i++;
	}
	free_arr(path);
}

void	ft_exec(char *cmd, char **_cmd)
{
	int i;
	char **path;

	i = 0;
	path = NULL;
	while(environ[i])
	{
		if (ft_strncmp(environ[i], "PATH", 4) == 0)
		{
			environ[i] += 5;
			path = ft_split(environ[i], ':');
			break;
		}
		i++;
	}
	fill_path(cmd, _cmd, path);
}

void	parent_process(int fd[2], int infile, char *cmd)
{
	char	**cmd1;

	close(fd[0]);
	cmd1 = ft_split(cmd, ' ');
	dup2(infile, 0);
	dup2(fd[1], 1);
	if (cmd1[0][0] == '/')
	{
		if (execve(cmd1[0], cmd1, environ) == -1)
			ft_print("something wrong...\n");
	}
	else
		ft_exec(cmd1[0], cmd1);
	free_arr(cmd1);
	close(fd[1]);
	close(infile);
	wait(NULL);
}

void	child_process(int fd[2], int outfile, char *cmd)
{
	char	**cmd2;

	close(fd[1]);
	cmd2 = ft_split(cmd, ' ');
	dup2(fd[0], 0);
	dup2(outfile, 1);
	if (cmd2[0][0] == '/')
	{
		if (execve(cmd2[0], cmd2, environ) == -1)
			ft_print("something wrong...\n");
	}
	else
		ft_exec(cmd2[0], cmd2);
	free_arr(cmd2);
	close(fd[0]);
	close(outfile);
}

void	pipex(char **argv)
{
	int		infile;
	int		outfile;
	pid_t	id;
	int 	fd[2];	

	infile = open(argv[1], O_RDONLY);
	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (infile == -1 || outfile == -1)
		ft_print("something wrong with opening...\n");
	if (pipe(fd) == -1)
		ft_print("something wrong...\n");
	id = fork();
	if (id < 0)
		ft_print("something wrong...\n");
	if (id == 0)
		child_process(fd, outfile, argv[3]);
	else
		parent_process(fd, infile, argv[2]);
}