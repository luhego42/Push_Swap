NAME		=	push_swap

NAME_BONUS	=	checker

SRC			=	./main.c \
			 	./ft_clear_lst.c \
				./ft_lstadd_last.c \
				./ft_lst_size.c \
				./ft_new_list.c \
				./ft_atol.c \
				./ft_parsing.c \
				./ft_movement.c \
				./ft_sort_list.c \
				./ft_check_list.c \
				./ft_swap_stack.c

SRC_BONUS	=	./main_bonus.c \
			 	./ft_clear_lst.c \
				./ft_lstadd_last.c \
				./ft_lst_size.c \
				./ft_new_list.c \
				./ft_atol.c \
				./ft_parsing.c \
				./ft_movement.c \
				./ft_check_list.c \
				./ft_swap_stack.c

OBJ			=	$(SRC:.c=.o)

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

CC			=	clang

CFLAGS		=	-g -Wall -Wextra -Werror

LIBFT.A		=	Libft/libft.a

all:			$(NAME)

bonus:			$(NAME_BONUS)

$(NAME):		$(OBJ)
					make -sC Libft
					clang $(OBJ) $(CFLAGS) $(LIBFT.A) -o $(NAME)

$(NAME_BONUS):	$(OBJ_BONUS)
					make -sC Libft
					clang $(OBJ_BONUS) $(CFLAGS) $(LIBFT.A) -o $(NAME_BONUS)
clean:
					@make clean -sC Libft
					rm -f $(OBJ) $(OBJ_BONUS)

fclean:			clean
					@make fclean -sC Libft
					rm -f $(NAME) $(NAME_BONUS)

re:				fclean all

.PHONY:			all bonus clean fclean re
