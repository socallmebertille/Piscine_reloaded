#INTRO

Ici, on fait un Makefile bien plus simple poyr creer seulement un executable (./a.out) et non une librairie (archive.a).
On a qu'un seul fichier a compiler donc c'est encore plus simple.

#Variables

NAME = ft_display_file                  #nom du futur executable (=a.out)
FLAGS = -Wall -Wextra -Werror            #flags de compilation

#Sources et Objets

SRC = ft_display_file.c                  #fichier a compiler
OBJ = ft_display_file.o                   #fichier retranscrit en binaire pour compilation

#Rules

all: ${NAME}                              #premiere regle par defaut qui renvoie a la regle de NAME

${NAME}:                                   #regle de NAME
	cc ${FLAGS} -c ${SRC}                     #compilation du fichier .c -> pour avoir le .o
	cc -o ${NAME} ${OBJ}                       #compilation du fichier .o -> pour avoir l'executable

clean:                                      #regle de nettoyage
	rm -rf ${OBJ}                              #supprime les .o
fclean: clean                               #regle de full suppression qui fait appel aussi a la premiere
	rm -rf ${NAME}                             #supprime l'executable
re: fclean all                              #regle de remake qui supp si existe et refait

.PHONY: all clean fclean re                 #precise que ce sont des regles
