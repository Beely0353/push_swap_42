NAME = push_swap


_SRCS = main.c init.c find_small.c error.c \
		ppab.c rab.c ssab.c

DIR = srcs
SRCS = $(addprefix $(DIR)/, $(_SRCS))
SRCO = $(SRCS:.c=.o)

FLAG = -g -Wall -Wextra -Werror
INC = -I includes/

all :$(NAME)

$(NAME) : $(SRCO)
	make -C libft
	gcc -o $(NAME) -Llibft -lft $(SRCO)

%.o : %.c
	gcc $(FLAG) -c $< -o $@ $(INC)

clean :
	/bin/rm -f $(SRCO)
	make clean -C libft

fclean : clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re :
	make fclean
	make