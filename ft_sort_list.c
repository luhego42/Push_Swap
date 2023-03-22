/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:29:55 by luhego            #+#    #+#             */
/*   Updated: 2023/03/22 16:41:06 by #H42USER         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_numbers **stack_a, t_numbers **stack_b, int cut)
{
	int	size;
	int	push_b_count;

	size = 0;
	push_b_count = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index < size + cut)
		{
			ft_push(stack_b, stack_a, 'B');
			push_b_count++;
		}
		else
			ft_rotate(stack_a, 'A');
		if (*stack_b && (*stack_b)->index < size + (cut / 2))
			ft_rotate(stack_b, 'B');
		if (push_b_count == cut)
		{
			push_b_count = 0;
			size = size + cut;
		}
	}
}
/*

void	ft_push_a(t_numbers **stack_b)
{
	t_numbers	**stack_a;

	while (stack_b)
	{
		ft_push(stack_a, &stack_b, 'A');
	}
}*/
