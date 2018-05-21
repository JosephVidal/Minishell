/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>

int my_strlen(char const *);
char *my_strcpy(char *, char const *);

char *my_strcat_beg(char *dest, char const *src)
{
	int i = 0;
	int j = 0;
	char *buff = malloc(my_strlen(dest) + my_strlen(src));

	if (buff == NULL)
		return (NULL);
	for (; src[i] != '\0'; i++)
		buff[i] = src[i];
	for (; dest[j] != '\0'; i++, j++)
		buff[i] = dest[j];
	return (buff);
}
