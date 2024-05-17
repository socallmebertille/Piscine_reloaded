# Explanation :

## Intro :

Ici, on fait un Makefile bien plus simple poyr creer seulement un executable (./a.out) et non une librairie (archive.a).

<br>

On a qu'un seul fichier a compiler donc c'est encore plus simple.

## Variables

| Code | Description |
| --- | --- |
| `NAME = ft_display_file` | Nom du futur executable (=a.out) |
| `FLAGS = -Wall -Wextra -Werror` | Flags de compilation |

## Sources et Objets

| Code | Description |
| --- | --- |
| `SRC = ft_display_file.c` | Fichier a compiler |
| `OBJ = ft_display_file.o` | Fichier retranscrit en binaire pour compilation |

## Rules

| Code | Description |
| --- | --- |
| `all: ${NAME}` | Premiere regle par defaut qui renvoie a la regle de `NAME` |
| `${NAME}:` <br> `cc ${FLAGS} -c ${SRC}` <br> `cc -o ${NAME} ${OBJ}` | Regle de `NAME` <br> Compilation du fichier .c -> pour avoir le .o <br> Compilation du fichier .o -> pour avoir l'executable|
| `clean:` <br> `rm -rf ${OBJ}`| Regle de nettoyage <br> Supprime les .o |
| `fclean: clean` <br> `rm -rf ${NAME}` | Regle de full suppression qui fait appel aussi a la premiere <br> Supprime l'executable |
| `re: fclean all` | Regle de remake qui supp si existe et refait |
| `.PHONY: all clean fclean re` | Precise que ce sont des regles |
