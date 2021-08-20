#include "pipex.h"

int	main(int argc, char **argv)
{
	if (argc == 5)
		pipex(argv);
	else
		ft_print("Enter :  file1 cmd1 cmd2 file2");
}
