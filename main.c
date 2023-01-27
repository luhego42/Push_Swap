#include "header.h"
#include <stdio.h>

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
		ft_putchar_fd('a', 1);
	}
	return (0);
}
