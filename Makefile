NAME		=	push_swap

SRC			=	./main.c \
			 	./ft_clear_lst.c \
				./ft_lstadd_last.c \
				./ft_new_list.c \
				./ft_atol.c \
				./ft_parsing.c \
				./ft_movement.c \
				./ft_sort_list.c \

OBJ			=	$(SRC:.c=.o)

CC			=	clang

CFLAGS		=	-g -Wall -Wextra -Werror

LIBFT.A		=	Libft/libft.a

all:			$(NAME)

$(NAME):		$(OBJ)
					make -C Libft
					clang $(OBJ) $(CFLAGS) $(LIBFT.A) -o $(NAME)

clean:
					@make clean -sC Libft
					rm -f $(OBJ)

fclean:			clean
					@make fclean -sC Libft
					rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
