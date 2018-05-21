/*
** EPITECH PROJECT, 2018
** count_words
** File description:
** count_words
*/

#include <stdio.h>

void rb_print_err(char *);
int rb_xerror(char *);
int my_strlen(char *);

int count_words(char *str)
{
	int i = 0;
	int j = 0;

	if (str == NULL)
		rb_xerror("count_words: String pointer is NULL");
	while (str[i] != '\0') {
		if ((str[i] != ' ' && str[i + 1] == ' ') || str[i + 1] == '\0')
			j++;
		i++;
	}
	return (j);
}
