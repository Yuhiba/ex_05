NAME		= apply_on_eq_int_list

SRC			= main.c \
			my_apply_on_eq_int_list.c \
			../ex_01/my_params_in_list.c

INCLUDE		= include

LIBDIR		= lib

LIBINCLUDE	= lib/include

OBJ			= $(SRC:.c=.o)

CC			= gcc

RM			= rm -f

LDFLAGS		+= -L $(LIBDIR)
CFLAGS		+= -I $(INCLUDE) -I $(LIBINCLUDE) -Wextra -Wall -Werror
CFLAGS		+= -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBDIR)
			$(CC) -o $@ $^ -L $(LIBDIR) -lmy

clean:
			make -C $(LIBDIR) clean
			$(RM) $(OBJ)

fclean:		clean
			make -C $(LIBDIR) fclean
			$(RM) $(NAME)

re:			fclean all
			make -C $(LIBDIR) re

.PHONY:		all clean fclean re