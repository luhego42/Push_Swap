/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:22:47 by luhego            #+#    #+#             */
/*   Updated: 2023/03/27 16:32:07 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lst_size(t_numbers *lst)
{
	t_numbers	*tmp;
	int			list_len;

	tmp = lst;
	list_len = 0;
	while (tmp)
	{
		tmp = tmp->next;
		list_len++;
	}
	return (list_len);
}
