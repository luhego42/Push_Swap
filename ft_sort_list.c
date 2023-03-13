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

t_numbers	*ft_push_b(t_numbers *stack_a)
{
	t_numbers	*stack_b;
	while (stack_a)
	{
		ft_push(&stack_b, &stack_a, 'B');
	}
	return (stack_b);
}

t_numbers	*ft_push_a(t_numbers *stack_b)
{
	t_numbers	*stack_a;
	while (stack_b)
	{
		ft_push(&stack_a, &stack_b, 'A');
	}
	return (stack_a);
}
