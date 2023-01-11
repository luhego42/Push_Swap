#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

void	ft_exit(int exit_code);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
#endif