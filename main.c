#include "header.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

int	ft_isdigit(char	nb)
{
	if (!(nb >= '0' && nb <= '9')
		return (0);
	return (1);
}

/*void	ft_exit(int exit_code)
{
	if (exit_code)
		ft_putstr_fd("Error\n", 2);
	exit(0);
}
*/
int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (argc > 1)
	{
		y = 0;
		while (argv[x][y])
		{
			printf("%c", argv[x][y]);
			if (!ft_isdigit(argv[x][y]))
				printf("notok\n");
			else
				printf("ok\n");
			y++;
		}
		x++;
		argc--;
	}
	return (0);
}
