/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:42:41 by luhego            #+#    #+#             */
/*   Updated: 2023/03/27 16:54:29 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> //to rm

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
		printf("sa\n"); // to rm
	else if (c == 'B')
		printf("sb\n"); // to rm
}

void	ft_swap_a_b(t_numbers **stack_a, t_numbers **stack_b)
{
	ft_swap(stack_a, 0);
	ft_swap(stack_b, 0);
	printf("ss\n"); // to rm
}
