##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_free_tab.c			\
		my_print_tab.c			\
		my_putchar.c			\
		my_puterr.c			\
		my_putstr.c			\
		my_strcmp.c			\
		my_strlen.c			\
		my_strcat.c			\
		my_strdup.c			\
		my_tablen.c			\

CFLAGS	=	-W -Wall -Wextra -Wpadded -pedantic -O3

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../

clean :
	rm -f $(OBJ)
	rm -f *~
	rm -f *#*

fclean : clean
	rm -f ../$(NAME)

re : fclean all
