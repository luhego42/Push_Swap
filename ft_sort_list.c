/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:29:55 by luhego            #+#    #+#             */
/*   Updated: 2023/03/29 18:19:54 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_little_sort(t_numbers **stack_a, t_numbers **stack_b, int argc)
{
	if (argc == 5)
	{
		while ((*stack_a)->index != 4)
			ft_smart_rotate(stack_a, 4, 'A');
		ft_push(stack_b, stack_a, 'B');
		argc--;
	}
	if (argc == 4)
	{
		while ((*stack_a)->index != 3)
			ft_smart_rotate(stack_a, 3, 'A');
		ft_push(stack_b, stack_a, 'B');
	}
	if ((*stack_a)->index == 2)
		ft_rotate(stack_a, 'A');
	if ((*stack_a)->next->index == 2)
		ft_reverse_rotate(stack_a, 'A');
	if ((*stack_a)->index > (*stack_a)->next->index)
		ft_swap(stack_a, 'A');
	while (*stack_b)
	{
		ft_push(stack_a, stack_b, 'A');
		ft_rotate(stack_a, 'A');
	}
}

void	ft_smart_rotate(t_numbers **stack, int stack_max, char c)
{
	t_numbers	*tmp;
	int			i;

	tmp = *stack;
	i = 0;
	while (tmp && tmp->index != stack_max)
	{
		tmp = tmp->next;
		i++;
	}
	if (i <= stack_max / 2)
		ft_rotate(stack, c);
	else
		ft_reverse_rotate(stack, c);
}

void	ft_push_b(t_numbers **stack_a, t_numbers **stack_b, int cut)
{
	int			size;
	int			push_b_count;

	push_b_count = 0;
	size = 0;
	while (*stack_a)
	{
		if (*stack_a && (*stack_a)->index <= size + cut)
		{
			ft_push(stack_b, stack_a, 'B');
			push_b_count++;
			if (*stack_b && (*stack_b)->index < size + (cut / 2)
				&& *stack_a && (*stack_a)->index > size + cut)
				ft_rotate_a_b(stack_a, stack_b, 1);
			else if (*stack_b && (*stack_b)->index < size + (cut / 2))
				ft_rotate(stack_b, 'B');
		}
		else
			ft_rotate(stack_a, 'A');
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
		if (*stack_b && (*stack_b)->index == stack_max - 1)
			ft_push(stack_a, stack_b, 'A');
		if (*stack_b && (*stack_b)->index == stack_max)
		{
			ft_push(stack_a, stack_b, 'A');
			stack_max--;
		}
		if (*stack_a && (*stack_a)->next
			&& (*stack_a)->index > (*stack_a)->next->index)
		{
			ft_swap(stack_a, 'A');
			stack_max--;
		}
		if (*stack_b && (*stack_b)->index != stack_max)
			ft_smart_rotate(stack_b, stack_max, 'B');
	}
}
