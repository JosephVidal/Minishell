##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

CC	=	gcc

SRC	=	src/main.c		\
		src/mysh.c		\
		src/builtins.c		\
		src/error_handling.c	\

NAME	=	mysh

OBJ	=       $(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Wpadded -I include/ -O3

all : $(NAME)

$(NAME) : $(OBJ)
	make re -C lib/my
	make re -C lib/rb
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) -L lib/ -lmy -lrb

mac: CC = clang
mac: all

debeug :  $(OBJ)
	make re -C lib/my
	make re -C lib/rb
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L lib/ -lmy -lrb -g3

clean :
	make clean -C lib/my
	make clean -C lib/rb
	rm -f *~
	rm -f *#*
	rm -f $(OBJ)

fclean : clean
	make fclean -C lib/my
	make fclean -C lib/rb
	rm -f $(NAME)

re :	fclean all
