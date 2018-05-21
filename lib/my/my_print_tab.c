/*
** EPITECH PROJECT, 2018
** my_print_tab.c
** File description:
** joseph.vidal@epitech.eu
*/

#include <stdio.h>

void my_putstr(char *);
void my_putchar(char);

void my_print_tab(char *const *tab)
{
	for (int i = 0; tab[i] != NULL; i++) {
		my_putstr(tab[i]);
		my_putchar('\n');
	}
}
