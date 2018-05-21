##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	count_words.c			\
		rb_malloc.c			\
		rb_print_err.c			\
		rb_strlen.c			\
		rb_str_to_word_array.c		\
		rb_xerror.c			\
		rb_strisinformat.c		\

CFLAGS	=	-W -Wall -Wextra -Werror -pedantic

OBJ	=	$(SRC:.c=.o)

NAME	=	librb.a

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
