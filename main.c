/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:34:06 by luhego            #+#    #+#             */
/*   Updated: 2023/02/20 18:20:56 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // a enlever

void	ft_exit(int exit_code)
{
	if (exit_code)
		ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_numbers	*lst_nb;
	int			i;
	long		atol_return;
	t_numbers	*new_list_return;

	lst_nb = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			while (argv[1][i] && argv[1][i] == ' ')
				i++;
			if (ft_isdigit(argv[1][i]) || argv[1][i] == '+' || argv[1][i] == '-')
			{
				atol_return = atol(&argv[1][i]);
				new_list_return = ft_new_list(atol_return);
				ft_lstadd_last(&lst_nb, new_list_return);
//				ft_putendl_fd(&argv[1][i], 1);
			}
			if (argv[1][i] == '+' || argv[1][i] == '-')
				i++;
			while (argv[1][i] && ft_isdigit(argv[1][i]))
				i++;
			if (argv[1][i] && !ft_isdigit(argv[1][i]) && argv[1][i] != ' ')
				ft_exit(1);
		}
	}
	printf("%ld, %ld, %ld\n", lst_nb->content, lst_nb->next->content, lst_nb->next->next->content);
//	ft_pars_list(lst);
//	ft_sort_list(lst);
	return (0);
}
