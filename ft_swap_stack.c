/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:42:41 by luhego            #+#    #+#             */
/*   Updated: 2023/03/29 18:20:25 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_numbers **stack, char c)
{
	t_numbers	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = tmp->next->next;
	(*stack)->next = tmp;
	if (c == 'A')
		ft_putstr_fd("sa\n", 1);
	else if (c == 'B')
		ft_putstr_fd("sb\n", 1);
}

void	ft_swap_a_b(t_numbers **stack_a, t_numbers **stack_b, char c)
{
	ft_swap(stack_a, 0);
	ft_swap(stack_b, 0);
	if (c)
		ft_putstr_fd("ss\n", 1);
}
