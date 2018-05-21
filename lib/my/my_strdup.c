/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** copy a string into another
*/

#include <stdlib.h>

int my_strlen(char const *);

char *my_strdup(char const *src)
{
	char *dest = malloc(sizeof(char) * my_strlen(src));

	if (dest == NULL)
		return (NULL);
	for (int i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
