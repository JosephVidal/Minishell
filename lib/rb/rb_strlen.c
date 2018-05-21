/*
** EPITECH PROJECT, 2018
** rb_strlen
** File description:
** rb_strlen
*/

#include <stdlib.h>
#include <stdio.h>

int rb_xerror(char *);

int rb_strlen(char *str)
{
	int i = 0;
	if (str == NULL)
		rb_xerror("rb_strlen: String pointer in NULL");
	while (str[i++] != '\0');
	return (i);
}
