/*
** EPITECH PROJECT, 2018
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdbool.h>

extern const int SUCCESS;
extern const int FAILURE;

void my_print_tab(char *const *);
void my_free_tab(char **);
void my_putchar(char);
void my_puterr(char const *);
int my_putstr(char const *);
int my_strlen(char const *);
bool my_strcmp(char const *, char const *);
char **my_strtwa(char *, char);
char *my_strcat_beg(char *, char const *);
char *my_strcat(char *, char const *);
char *my_strdup(char const *);
int my_tablen(char **);
char **my_tabdup(char *const *);

#endif
