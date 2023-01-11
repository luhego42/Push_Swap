NAME		=	push_swap

SRC			=	./main.c \

OBJ			+=	$(SRC:.c=.o)

CC			= clang

CFLAGS		+= -Wall -Wextra -Werror

$(NAME):	$(OBJ)
			clang $(CFLAGS) -o $(NAME) $(SRC)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
