/*
** EPITECH PROJECT, 2018
** rb_malloc
** File description:
** rb_malloc
*/

#include <stdlib.h>

void rb_xerror(char *);

void *rb_malloc(int size)
{
	char *ptr;

	if (size == 0)
		rb_xerror("rb_malloc: Cannot allocate 0 byte");
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		rb_xerror("rb_malloc: Pointer is NULL");
	return (ptr);
}
