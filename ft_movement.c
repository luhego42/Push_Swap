/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:38:29 by luhego            #+#    #+#             */
/*   Updated: 2023/03/29 18:34:51 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			ft_putstr_fd("pa\n", 1);
		else if (c == 'B')
			ft_putstr_fd("pb\n", 1);
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
		ft_putstr_fd("ra\n", 1);
	else if (c == 'B')
		ft_putstr_fd("rb\n", 1);
}

void	ft_rotate_a_b(t_numbers **stack_a, t_numbers **stack_b, char c)
{
	ft_rotate(stack_a, 0);
	ft_rotate(stack_b, 0);
	if (c)
		ft_putstr_fd("rr\n", 1);
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
		ft_putstr_fd("rra\n", 1);
	else if (c == 'B')
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rrr(t_numbers **stack_a, t_numbers **stack_b, char c)
{
	ft_reverse_rotate(stack_a, 0);
	ft_reverse_rotate(stack_b, 0);
	if (c)
		ft_putstr_fd("rrr\n", 1);
}
