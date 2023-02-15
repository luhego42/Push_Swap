/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:34:06 by luhego            #+#    #+#             */
/*   Updated: 2023/02/15 18:06:01 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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
	t_numbers	*lst;
	int			i;

	lst = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			while (argv[1][i] && argv[1][i] == ' ')
				i++;
			if (ft_isdigit(argv[1][i]) || argv[1][i] == '+' || argv[1][i] == '-')
				ft_lstadd_last(list, ft_new_list(ft_atol(argv[1][i])));
			if (argv[1][i] == '+' || argv[1][i] == '-')
				i++;
			while (argv[1][i] && ft_isdigit(argv[1][i]))
				i++;
			if (argv[1][i] && !ft_isdigit(argv[1][i]) && argv[1][i] != ' ')
				ft_exit();
		}
	}
	ft_pars_list(lst);
	ft_sort_list(lst);
	return (0);
}
// "    15--4784 +   +64554 54  78 665   -447   "
// "15" - "-4784" - "54" - "78" - "665" - "-447"
