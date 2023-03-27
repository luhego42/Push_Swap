/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:59 by luhego            #+#    #+#             */
/*   Updated: 2023/03/27 19:26:03 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct s_numbers
{
	long				content;
	int					index;
	struct s_numbers	*next;
}						t_numbers;

void		ft_exit(int exit_code, t_numbers **stack_a);
void		ft_lstadd_last(t_numbers **lst, t_numbers *new);
void		ft_swap(t_numbers **stack, char c);
void		ft_swap_a_b(t_numbers **stack_a, t_numbers	**stabk_b);
void		ft_push(t_numbers **stack_1, t_numbers **stack_2, char c);
void		ft_rotate(t_numbers **stack, char c);
void		ft_rotate_a_b(t_numbers **stack_a, t_numbers **stack_b);
void		ft_reverse_rotate(t_numbers **stack, char c);
void		ft_reverse_rotate_a_b(t_numbers **stack_a, t_numbers **stack_b);
void		ft_push_b(t_numbers **stack_a, t_numbers **stack_b, int cut);
void		ft_push_a(t_numbers **stack_b, t_numbers **stack_a, int stack_max);
void		ft_clear_lst(t_numbers **lst);
void		ft_smart_rotate(t_numbers **stack, int stack_max, char c);
void		ft_little_sort(t_numbers **stack_a, t_numbers **stack_b, int argc);
int			ft_lst_size(t_numbers *lst);
int			ft_check_list(t_numbers *stack);
long int	ft_atol(const char *nptr);
t_numbers	*ft_parsing(char *str_nb);
t_numbers	*ft_new_list(long content);
#endif
