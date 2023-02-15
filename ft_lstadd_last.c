/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:21:34 by luhego            #+#    #+#             */
/*   Updated: 2023/02/15 17:17:31 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_last(t_numbers **lst, t_numbers *new)
{
	t_numbers	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
	}
	else
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
		return (tmp);
	}
}
