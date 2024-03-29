RED		=	\033[31m
GRE		=	\033[32m
BLU		=	\033[34m
YEL		=	\033[33m
EOC		=	\033[0m

NAME 			= push_swap

SOURCES			=	./sources
OBJECTS			=	./bin

SRCS			=	push_swap.c \
					$(addprefix parsing/, check_arg.c pars.c)\
					$(addprefix utils/, utils1.c utils2.c ft_split.c lst.c)\
					$(addprefix operations/, rotate.c swap_push.c)\
					$(addprefix sort/, small_sort.c big_sort.c)

OBJS			=	$(addprefix ${OBJECTS}/, $(SRCS:.c=.o))

CFLAGS			=	-Wall -Wextra -Werror -Iincludes -g
CC				=	gcc
CINCLUDES		=	-I ./includes

${OBJECTS}/%.o: ${SOURCES}/%.c
	mkdir -p $(dir $@)
	${CC} ${CFLAGS} -o $@ -c $< ${CINCLUDES}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -rf ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
