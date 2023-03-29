/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:49:36 by luhego            #+#    #+#             */
/*   Updated: 2023/03/29 19:34:28 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int exit_code, t_numbers **stack_a)
{
	if (exit_code == 2)
		ft_putstr_fd("Error\n", 2);
	else if (exit_code == 1)
		ft_putstr_fd("KO\n", 1);
	if (stack_a && *stack_a)
		ft_clear_lst(stack_a);
	exit(0);
}

int	ft_move_cmp_exec(char *move, t_numbers **stack_a, t_numbers **stack_b)
{
	if (!ft_strncmp(move, "pa\n", 3))
		ft_push(stack_a, stack_b, 0);
	else if (!ft_strncmp(move, "pb\n", 3))
		ft_push(stack_b, stack_a, 0);
	else if (!ft_strncmp(move, "ra\n", 3))
		ft_rotate(stack_a, 0);
	else if (!ft_strncmp(move, "rb\n", 3))
		ft_rotate(stack_b, 0);
	else if (!ft_strncmp(move, "rr\n", 3))
		ft_rotate_a_b(stack_a, stack_b, 0);
	else if (!ft_strncmp(move, "rra\n", 4))
		ft_reverse_rotate(stack_a, 0);
	else if (!ft_strncmp(move, "rrb\n", 4))
		ft_reverse_rotate(stack_b, 0);
	else if (!ft_strncmp(move, "rrr\n", 4))
		ft_rrr(stack_a, stack_b, 0);
	else if (!ft_strncmp(move, "sa\n", 3))
		ft_swap(stack_a, 0);
	else if (!ft_strncmp(move, "sb\n", 3))
		ft_swap(stack_b, 0);
	else if (!ft_strncmp(move, "ss\n", 3))
		ft_swap_a_b(stack_a, stack_b, 0);
	else
		return (-1);
	return (0);
}

static void	ft_read_move(char *move, t_numbers	**stack_a, t_numbers **stack_b)
{
	move = get_next_line(1);
	while (move)
	{
		if (ft_move_cmp_exec(move, stack_a, stack_b) == -1)
		{
			free(move);
			ft_clear_lst(stack_b);
			ft_exit(2, stack_a);
		}
		free(move);
		move = get_next_line(1);
	}
}

int	main(int argc, char **argv)
{
	t_numbers	*stack_a;
	t_numbers	*stack_b;
	char		*move;

	if (argc != 2)
		ft_exit(2, 0);
	stack_b = NULL;
	stack_a = ft_parsing(argv[1]);
	move = 0;
	ft_read_move(move, &stack_a, &stack_b);
	if (!ft_check_list(stack_a) || stack_b != NULL)
	{
		ft_clear_lst(&stack_b);
		ft_exit(1, &stack_a);
	}
	ft_putstr_fd("OK\n", 1);
	ft_clear_lst(&stack_a);
	return (0);
}
