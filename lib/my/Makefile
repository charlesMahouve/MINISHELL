##
## EPITECH PROJECT, 2020
## make
## File description:
## file
##

SRC	=	my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_atoi.c	\
		my_getnbr.c	\
		my_strlen.c	\
		my_strcmp.c	\
		my_strdup.c	\
		my_str_to_word_array.c	\
		my_strcat.c	\
		my_bzero.c	\
		my_itoa.c	\
		my_itoa_base.c	\
		my_putnbr.c	\
		my_putchar_fd.c	\
		my_putendl.c	\
		my_putstr_fd.c	\
		my_strdel.c	\
		my_strjoin.c	\
		my_strnew.c	\
		my_cnt_char.c	\
		my_cnt_wrd.c	\
		my_get_envp.c	\
		my_get_home.c	\
		my_get_path.c	\
		my_map_cpy.c	\
		my_path_handling.c \
		my_seperate_path.c \
		my_str_to_word_tab.c \



INC	=	-I ./include

CFLAGS	+=	-g $(INC)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) *.o
		mv $(NAME) ../
		mkdir -p ../../include
		cp my.h ../../include
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		fclean all