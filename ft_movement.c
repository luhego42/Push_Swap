/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:38:29 by luhego            #+#    #+#             */
/*   Updated: 2023/03/15 17:52:26 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // to remove

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
		printf("sa\n");
	else if (c == 'B')
		printf("sb\n");
}

void	ft_swap_a_b(t_numbers **stack_a, t_numbers **stack_b)
{
	ft_swap(stack_a, 0);
	ft_swap(stack_b, 0);
	printf("ss\n");
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
			printf("pa\n");
		else if (c == 'B')
			printf("pb\n");
	}
}

void	ft_rotate(t_numbers **stack, char c)
{
	t_numbers	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	ft_lstadd_last(stack, tmp);
	if (c == 'A')
		printf("ra\n");
	else if (c == 'B')
		printf("rb\n");
}

void	ft_rotate_a_b(t_numbers **stack_a, t_numbers **stack_b)
{
	ft_rotate(stack_a, 0);
	ft_rotate(stack_b, 0);
	printf("rr\n");
}

void	ft_reverse_rotate(t_numbers **stack, char c)
{
	t_numbers	*tmp;
	t_numbers	*lst_last;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	lst_last = tmp->next;
	tmp->next = NULL;
	lst_last->next = *stack;
	*stack = lst_last;
	if (c == 'A')
		printf("rra\n");
	else if (c == 'B')
		printf("rrb\n");
}

void	ft_reverse_rotate_a_b(t_numbers **stack_a, t_numbers **stack_b)
{
	ft_reverse_rotate(stack_a, 0);
	ft_reverse_rotate(stack_b, 0);
	printf("rrr\n");
}
