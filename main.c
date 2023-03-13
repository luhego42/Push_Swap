/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:34:06 by luhego            #+#    #+#             */
/*   Updated: 2023/03/13 17:42:14 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> // a enlever

void	ft_exit(int exit_code)
{
	if (exit_code)
		ft_putstr_fd("Error\n", 2);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_numbers	*nb;
	t_numbers	*tmp;

	if (argc != 2)
		ft_exit(1);
	nb = ft_parsing(argv[1]);
	tmp = nb;
	while (nb)
	{
		printf("content = %ld, index = %i\n", nb->content, nb->index);
		nb = nb->next;
	}
	ft_swap(&tmp, 'A');
	nb = tmp;
	while (nb)
	{
		printf("content = %ld, index = %i\n", nb->content, nb->index);
		nb = nb->next;
	}
	return (0);
}
