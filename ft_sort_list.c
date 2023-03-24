/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:29:55 by luhego            #+#    #+#             */
/*   Updated: 2023/03/13 15:26:34 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_smart_rotate(t_numbers **stack, int stack_max)
{
	t_numbers	*tmp;
	int	i;

	tmp = *stack;
	i = 0;
	while (tmp && tmp->index != stack_max)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < stack_max / 2)
		ft_rotate(stack, 'B');
	else
		ft_reverse_rotate(stack, 'B');
}

void	ft_push_b(t_numbers **stack_a, t_numbers **stack_b, int cut)
{
	int			size;
	int			push_b_count;

	push_b_count = 0;
	size = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index < size + cut)
		{
			ft_push(stack_b, stack_a, 'B');
			push_b_count++;
		}
		else
			ft_rotate(stack_a, 'A');
		if (*stack_b && (*stack_b)->index <= size + (cut / 2))
			ft_rotate(stack_b, 'B');
		if (push_b_count == cut)
		{
			push_b_count = 0;
			size = size + cut;
		}
	}
}

void	ft_push_a(t_numbers **stack_a, t_numbers **stack_b, int stack_max)
{
	while (*stack_b)
	{
		if ((*stack_b)->index == stack_max)
		{
			ft_push(stack_a, stack_b, 'A');
			stack_max--;
		}
		else if ((*stack_b)->index != stack_max)
		{
			ft_smart_rotate(stack_b, stack_max);
		}
	}
}
