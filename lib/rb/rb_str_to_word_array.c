/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** joseph.vidal@epitech.eu
*/

#include <stdio.h>
#include <stdlib.h>

int count_words(char *);
void *rb_malloc(int);

char *clean_str(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			i = 0;
		}
	}
	return (str);
}

char **clean_tab(char **tab)
{
	for (int i = 0; tab[i] != NULL; i++)
		tab[i] = clean_str(tab[i]);
	return (tab);
}

int static_strlen(char *str, char separator)
{
	static int i = 0;
	int j = 0;

	while (str[i] != separator && str[i] != '\0') {
		i++;
		j++;
	}
	i++;
	return (j);
}

char **rb_strtwa(char *str, char separator)
{
	int j = 0;
	int k = 0;
	char **tab = rb_malloc(sizeof(char *) * (count_words(str) + 1));

	tab[j] = rb_malloc(sizeof(char) * 42);
	for (int i = 0; str[i] != '\0'; i++, k++) {
		if (str[i] == separator && i != 0) {
			tab[j][k] = '\0';
			j++;
			i++;
			k = 0;
			tab[j] = rb_malloc(sizeof(char) * 42);
		}
		tab[j][k] = str[i];
	}
	tab[j + 1] = NULL;
	tab = clean_tab(tab);
	return (tab);
}
