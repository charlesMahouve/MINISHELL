##
## EPITECH PROJECT, 2020
## make
## File description:
## file
##

MAIN	=	src/main.c

SRC	=	src/build.c		\
		src/clean.c		\
		src/error_handling.c	\
		src/exec.c	\


CFLAGS	=	-I./include/ -Wall -Wextra

OBJ	=	$(MAIN:.c=.o) $(SRC:.c=.o)

NAME	=	mysh

ifndef ECHO
HIT_TOTAL != ${MAKE} ${MAKECMDGOALS} --dry-run ECHO="HIT_MARK" | grep -c "HIT_MARK"
HIT_COUNT = $(eval HIT_N != expr ${HIT_N} + 1)${HIT_N}
ECHO = echo "[`expr ${HIT_COUNT} '*' 100 / ${HIT_TOTAL}`%]"
endif

all:	$(NAME)

lib:
	make -s -C ./lib/my

$(NAME):	lib $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib -lmy
	rm -f $(OBJ)

debug:	lib
	gcc -g -o $(NAME) $(MAIN) $(SRC) $(CFLAGS) -L./lib -lmy
	rm -f $(OBJ)

target:
	$(ECHO)

clean:
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)

re:	fclean all


.PHONY:	all lib tests_run debug clean fclean re
