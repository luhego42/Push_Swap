/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:34:06 by luhego            #+#    #+#             */
/*   Updated: 2023/03/15 18:36:36 by luhego           ###   ########.fr       */
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

void	ft_print_list(t_numbers *lst)
{
	while (lst)
	{
		printf("content = %ld, index = %d\n", lst->content, lst->index);
		lst = lst->next;
	}
}

int	main(int argc, char **argv)
{
	t_numbers	*stack_a;
	t_numbers	*stack_b;

	if (argc != 2)
		ft_exit(1);
	stack_b = NULL;
	stack_a = ft_parsing(argv[1]);
	ft_print_list(stack_a);
	printf("\n\n");
	ft_push_b(&stack_a, &stack_b, 25);
	ft_print_list(stack_b);
/*
	ft_print_list(stack_a);
	ft_push(&stack_b, &stack_a, 'B');
	ft_push(&stack_b, &stack_a, 'B');
	ft_push(&stack_b, &stack_a, 'B');
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	ft_push(&stack_a, &stack_b, 'A');
	ft_push(&stack_a, &stack_b, 'A');
	ft_push(&stack_a, &stack_b, 'A');
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	ft_push(&stack_b, &stack_a, 'B');
	ft_push(&stack_b, &stack_a, 'B');
	ft_push(&stack_b, &stack_a, 'B');
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	ft_swap(&stack_a, 'A');
	ft_print_list(stack_a);
	ft_swap(&stack_b, 'B');
	ft_print_list(stack_b);
	ft_swap_a_b(&stack_a, &stack_b);
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	ft_rotate(&stack_a, 'A');
	ft_print_list(stack_a);
	ft_rotate(&stack_b, 'b');
	ft_print_list(stack_b);
	ft_rotate_a_b(&stack_a, &stack_b);
	ft_print_list(stack_a);
	ft_print_list(stack_b);
	ft_reverse_rotate(&stack_a, 'A');
	ft_print_list(stack_a);
	ft_reverse_rotate(&stack_b, 'B');
	ft_print_list(stack_b);
	ft_reverse_rotate_a_b(&stack_a, &stack_b);
	ft_print_list(stack_a);
	ft_print_list(stack_b);
*/	
	return (0);
}
