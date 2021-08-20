#ifndef PIPEX_H
# define PIPEX_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

extern char	**environ;

int     ft_print(char *str);
void	pipex(char **argv);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t n);
char	*ft_strdup(char *s1);

#endif
