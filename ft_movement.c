/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:38:29 by luhego            #+#    #+#             */
/*   Updated: 2023/03/13 17:55:43 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // to remove

void	ft_swap(t_numbers **stack, char c)
{
	t_numbers	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = tmp->next->next;
	(*stack)->next = tmp;
	if (c == 'A')
		printf("sa\n");
	else if (c == 'B')
		printf("sb\n");
}

void	ft_swap_a_b(t_numbers **stack_a, t_numbers **stack_b)
{
	ft_swap(stack_a, 0);
	ft_swap(stack_b, 0);
	printf("ss");
}

void	ft_push(t_numbers **stack_1, t_numbers **stack_2, char c)
{
	t_numbers	*tmp;

	if (*stack_2)
	{
		tmp = *stack_2;
		*stack_2 = (*stack_2)->next;
		tmp->next = *stack_1;
		*stack_1 = tmp;
		if (c == 'A')
			printf("pa");
		else if (c == 'B')
			printf("pb");
	}
}

void	ft_rotate(t_numbers **stack, char c)
{
	t_numbers	*tmp;
	
	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	ft_lstadd_last(stack, tmp);
	if (c == 'A')
		printf("ra");
	else if (c == 'B')
		printf("rb");
}

void	rotate_a_b(t_numbers **stack_a, t_numbers **stack_b)
{
	ft_rotate(stack_a, 0);
	ft_rotate(stack_b, 0);
	printf("rr");
}
/*
void	reverse_rotate(t_numbers *stack, char c)
{
	if (c == 'A')
		printf("rra");
	else if (c == 'B')
		printf("rrb");
}

void	reverse_rotate_a_b(t_numbers *stack_a, t_numbers *stack_b, char c)
{
	printf("rrr");
}*/
