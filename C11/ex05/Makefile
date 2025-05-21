NAME		= do-op

SRCS		= ft_atoi.c ft_op.c ft_out.c main.c

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

INCS		= includes

CC			= cc

CFLAGS		=  -Wall -Wextra -Werror

RM			= rm -f

.c.o:
			${CC} ${CFLAGS} -c -I ${INCS} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
