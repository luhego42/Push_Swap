/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:15:46 by luhego            #+#    #+#             */
/*   Updated: 2023/03/27 14:32:56 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_list(t_numbers	*stack)
{
	int	check_list;

	check_list = 0;
	while (stack)
	{
		if (check_list != stack->index)
			return (0);
		stack = stack->next;
		check_list++;
	}
	return (1);
}
