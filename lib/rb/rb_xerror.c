/*
** EPITECH PROJECT, 2018
** rb_xerror
** File description:
** rb_xerror
*/

#include <unistd.h>
#include <stdlib.h>

void rb_print_err(char *);

int rb_xerror(char *str)
{
	char c = '\n';

	rb_print_err("Error: ");
	rb_print_err(str);
	write(1, &c, 1);
	exit(84);
}
