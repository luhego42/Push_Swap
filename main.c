/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:34:06 by luhego            #+#    #+#             */
/*   Updated: 2023/03/29 19:11:39 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int exit_code, t_numbers **stack_a)
{
	if (exit_code == 2)
		ft_putstr_fd("Error\n", 2);
	if (stack_a && *stack_a)
		ft_clear_lst(stack_a);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_numbers	*stack_a;
	t_numbers	*stack_b;
	int			cut;

	if (argc != 2)
		ft_exit(1, 0);
	stack_b = NULL;
	stack_a = ft_parsing(argv[1]);
	if (!ft_check_list(stack_a))
	{
		argc = ft_lst_size(stack_a);
		if (argc < 6)
		{
			ft_little_sort(&stack_a, &stack_b, argc);
			return (0);
		}
		else if (argc < 150)
			cut = 25;
		else
			cut = 63;
		ft_push_b(&stack_a, &stack_b, cut);
		ft_push_a(&stack_a, &stack_b, argc - 1);
	}
	ft_clear_lst(&stack_a);
	return (0);
}
