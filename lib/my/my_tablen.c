/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** return the length of the string passed in parameter
*/

#include <stdio.h>

int my_tablen(char **tab)
{
	int i = 0;

	while (tab[i] != NULL)
		i++;
	return (i);
}
