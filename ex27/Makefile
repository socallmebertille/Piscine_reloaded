#Variables

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror

#Sources et Objets

SRC = ft_display_file.c
OBJ = ft_display_file.o

#Rules

all: ${NAME}

${NAME}:
	cc ${FLAGS} -c ${SRC} 
	cc -o ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY: all clean fclean re

