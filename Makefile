NAME		= push_swap

SRC			= ./main.c \

OBJ			= $(SRC:.c=.o)

CC			= clang

CFLAGS		= -Wall -Wextra -Werror

LIBFT		= Libft/libft.a

$(LIBFT):
	make -C Libft

all:		$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
			clang $(OBJ) $(CFLAGS) $(LIBFT) -o $(NAME)

clean:
			@make clean -sC Libft
			rm -f $(OBJ)

fclean:		clean
			@make fclean -sC Libft
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
