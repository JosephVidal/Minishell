/*
** EPITECH PROJECT, 2018
** rb_strisinformat
** File description:
** rb_strisinformat
*/

#include <stdio.h>

int rb_xerror(char *);

int cmp(char c, char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0') {
		if (str[i] == c)
			j++;
		i++;
	}
	return ((j == 0) ? 84 : 0);
}

int rb_strisinformat(char *str, char *format)
{
	int i = 0;

	if (str == NULL || format == NULL)
		rb_xerror("rb_strisinformat: string pointer is NULL");
	while (str[i] != '\0') {
		if (cmp(str[i], format) == 84)
			return (0);
		i++;
	}
	return (1);
}
