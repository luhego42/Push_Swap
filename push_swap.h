/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:33:59 by luhego            #+#    #+#             */
/*   Updated: 2023/03/13 17:48:26 by luhego           ###   ########.fr       */
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

void		ft_exit(int exit_code);
void		ft_lstadd_last(t_numbers **lst, t_numbers *new);
void		ft_swap(t_numbers **stack, char c);
void		ft_swap_a_b(t_numbers **stack_a, t_numbers	**stabk_b);
void		ft_push(t_numbers **stack_1, t_numbers **stack_2, char c);
long int	ft_atol(const char *nptr);
t_numbers	*ft_parsing(char *str_nb);
t_numbers	*ft_new_list(long content);
#endif
