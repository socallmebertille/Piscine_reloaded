# Explanation :

## Intro :
Les makefile sont usuellement utilisés pour faire le travail de compilation classique de fichiers .c

<br>

Ce qu’il se passe lors d’une compilation c’est : 
<br>
1 - les fichiers .c sont transformés en fichiers .o (fichiers traduit en binaire)
<br>
2 - on les “link” (ou lie) entre eux pour pouvoir creer un executable et lancer le programme souhaite

<br>

Le but ici est d'éviter les manipulations d'écriture fastidieuses quand les quantités de fichiers s’additionnent. 

<br>

Par exemple, si l’on modifie un seul fichier, pas besoin de refaire tout le processus, le Makefile récupère sa librairie, 
compare les fichiers c archivés avec ceux du directory de travail pour voir s’il y a eu des modifications récentes. 

<br>

En fonction de cela, il n’aura pas besoin de transformer à nouveau TOUS les fichiers .c en .o mais uniquement ceux qui ont été modifiés.

## Variables :

| Code | Description |
| --- | --- |
| `NAME	= libft.a` | Nom de la librairie souhaitée après lancement du Makefile dans la variable ` NAME ` |
| `SRCDIR  = srcs` | Nom du directory dans laquelle on va récupérer les fichiers sources |
| `INCDIR  = includes` | Nom du directory des headers (= fichier .h dans laquelle on peut retrouver des librairies et/ou des prototypes) |
| `CC  	= cc` | Cette variable est facultative |
| `AR  	= ar rcs` | Commande de compilation pour bibliothèque avec : <br> `r` = si librairie existe déjà on remplace les anciens fichiers par les nouveaux <br> `c` = créer librairie si existe pas <br> `s` = trie ou index pour un meilleur classement des fonctions dans la librairie) |
| `CFLAGS  = -Wall -Wextra -Werror` | Cariable pour stocker les flags de compilation |
| `RM  	= rm -f` | `rm` supprime les fichiers avec : <br> `-f` qui force la suppression (si les fichiers n’existent pas alors pas de message d’erreur) |

## Sources et objets :

| Code | Description |
| --- | --- |
| `SRCS	= ${addprefix ${SRCDIR}/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c}` | On récupère les fichiers en appelant le nom de leur directory suivis de `/` avant leur nom |
| `OBJS	= ${SRCS:.c=.o}` | On déclare une variable OBJS qui va prendre la valeur de la variable SRCS une fois la règle .c.o exécutée |

## Rules :


| Code | Description |
| --- | --- |
| `all:	${NAME}` | `all` est la première règle par défaut et elle dépendante de la variable ` NAME ` |
| `${NAME}:    	${OBJS}` <br> `${AR} ${NAME} ${OBJS}	` | La variable NAME est dépendante de la variable ` OBJS ` |
| `.c.o:` <br> `${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@` | Compile avec les flags <br> `-I` permet d’inclure les répertoires associés à la variable `INCDIR` <br> `-c $<` sans lier les fichiers entre eux c’est-a-dire les fichiers `$<` donc de la première dépendance <br> `-o $@` a l’endroit du nom cible |
| `clean:` <br> `${RM} ${OBJS}` | Règle qui permet de supprimer les fichiers créés par la variable OBJS donc les points .o |
| `fclean: clean` <br> `${RM} ${NAME}` | Règle qui permet de supprimer les fichiers créés par la variable NAME donc TOUT donc les fichiers .o et la librairie libft.a |
| `re: 	fclean all` | Recommence le Makefile |
| `.PHONY: all clean fclean re` | Précise que si ces règles sont appelés dans le terminale avec `make re` par exemple s’il existe des fichiers du même nom alors ce sont bien les règles qui seront exécutées |

## How to use Makefile in the terminal :

Une fois que ton Makefile est termine, tu lance la commande "make" dans ton terinal et il va creer ta librairie "libft.a" 
qui contient les dossiers archives en .o, donc transcrit en binaire ainsi que les fchiers d'origine en .c.

<br>

| Command | Description |
| --- | --- |
| ` make clean ` | va supprimer les fichiers .o |
| ` make fclean ` | va forcer la suppression de a toalte des archives |
| ` make re ` | va supprimer ce qui existe potentiellement puis "make" de nouveau l'archive |

Une fois que la librairie est creee tu peux creer un fichier .c pour tester que le ien s'est bien fait.

<br> 

Tu vas alors compiler dans ton terminal de cette maniere :
<br>
```
cc -o test test.c -I./includes -L. -lft
```
<br>

` -o ` Permet de donner a l'executble qui sera "test" dans cette exemple et executera test.c
<br>

` -I./includes ` Indique dans quelle fichier se trouver ton fichier header .h ou se trouve les include de bibliotheques et de prototypes
<br>

` -L. ` Permet d'indiquer dans quel dossier se trouve ta librairie et en l'occurrence "." veut dire dans le repertoire courant
<br>

` -lft ` Precise le nom de ta libraire sans le prefixe "lib" et le suffixe ".a" de "libft.a" donc "-lnom_de_la_lib"
<br>
<<<<<<< HEAD
La commande a donc creer l'executable ` test ` que l'on peut run en ecrivant ` ./test ` dans le terminal.
=======
La commande a donc creer l'executable ` test ` que l'on peut run en ecrivant ` ./test ` dans le terminal.
>>>>>>> f8993c4fb0bc45e9fe144661b70d057d06f5c171
