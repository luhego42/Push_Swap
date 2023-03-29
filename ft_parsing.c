/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:42:04 by luhego            #+#    #+#             */
/*   Updated: 2023/03/29 19:12:40 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_args(t_numbers *lst_nb)
{
	t_numbers	*i;
	t_numbers	*j;

	i = lst_nb;
	while (i)
	{
		if (i->content > INT_MAX || i->content < INT_MIN)
			ft_exit(2, &lst_nb);
		j = i->next;
		while (j)
		{
			if (j->content == i->content && j != i)
				ft_exit(2, &lst_nb);
			j = j->next;
		}
		i = i->next;
	}
}

static void	ft_index(t_numbers *lst_nb)
{
	t_numbers	*i;
	t_numbers	*j;

	i = lst_nb;
	while (i)
	{
		j = lst_nb;
		i->index = 0;
		while (j)
		{
			if (i->content > j->content)
				i->index++;
			j = j->next;
		}
		i = i->next;
	}
}

static t_numbers	*ft_create_list(char *nb)
{
	t_numbers	*lst_nb;
	t_numbers	*new_list_return;
	int			i;

	i = 0;
	lst_nb = 0;
	while (nb[i])
	{
		while (nb[i] && nb[i] == ' ')
			i++;
		if ((nb[i]) && (ft_isdigit(nb[i]) || nb[i] == '+' || nb[i] == '-'))
		{
			new_list_return = ft_new_list(ft_atol(&nb[i]));
			ft_lstadd_last(&lst_nb, new_list_return);
		}
		if ((nb[i]) && (nb[i] == '+' || nb[i] == '-'))
			i++;
		if (nb[i] && !ft_isdigit(nb[i]))
			ft_exit(1, &lst_nb);
		while (nb[i] && ft_isdigit(nb[i]))
			i++;
		if (nb[i] && !ft_isdigit(nb[i]) && nb[i] != ' ')
			ft_exit(1, &lst_nb);
	}
	return (lst_nb);
}

t_numbers	*ft_parsing(char *nb)
{
	t_numbers	*lst_nb;

	lst_nb = 0;
	lst_nb = ft_create_list(nb);
	if (!lst_nb)
		ft_exit(2, 0);
	ft_check_args(lst_nb);
	ft_index(lst_nb);
	return (lst_nb);
}
