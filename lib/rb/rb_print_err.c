/*
** EPITECH PROJECT, 2018
** rb_print_err
** File description:
** rb_print_err
*/

#include <unistd.h>

int rb_strlen(char *);

void rb_print_err(char *str)
{
	write(2, str, rb_strlen(str));
}
