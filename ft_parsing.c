/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:42:04 by luhego            #+#    #+#             */
/*   Updated: 2023/03/07 15:45:21 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // a enlever

static void	ft_check_args(t_numbers *lst_nb)
{
	t_numbers	*i;
	t_numbers	*j;

	i = lst_nb;
	while (i)
	{
		if (i->content > INT_MAX || i->content < INT_MIN)
			ft_exit(1);
		j = i->next;
		while (j)
		{
			if (j->content == i->content && j != i)
				ft_exit(1);
			j = j->next;
		}
		i = i->next;
	}
}

static void	ft_normalise(t_numbers *lst_nb)
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

static t_numbers	*ft_creat_list(char *nb)
{
	t_numbers	*lst_nb;
	int			i;
	t_numbers	*new_list_return;

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
			ft_exit(1);
		while (nb[i] && ft_isdigit(nb[i]))
			i++;
		if (nb[i] && !ft_isdigit(nb[i]) && nb[i] != ' ')
			ft_exit(1);
	}
	return (lst_nb);
}

t_numbers	*ft_parsing(char *nb)
{
	t_numbers	*lst_nb;

	lst_nb = ft_creat_list(nb);
	ft_check_args(lst_nb);
	ft_normalise(lst_nb);
//	printf("%ld, %ld, %ld", lst_nb->content, lst_nb->next->content, lst_nb->next->next->content);
	return (lst_nb);
}
