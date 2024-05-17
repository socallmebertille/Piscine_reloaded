#Variables

NAME	= libft.a
SRCDIR	= srcs
INCDIR	= includes
CC	= cc
AR	= ar rcs
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

#Sources et objets

SRCS    = ${addprefix ${SRCDIR}/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c}
OBJS    = ${SRCS:.c=.o}

#Rules

all:	${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
.c.o:
		${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
