/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** mysh
*/

#ifndef MYSH_H_
#define MYSH_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/resource.h>

extern const int BUFF_SIZE;
extern const int NB_BUILTINS;

void clean_tab(char **);
bool check_builtins(char **);
bool check_cmd(char **, char **);
int my_sh(char * const*);
void my_exit(int);
void cd(char **, char *const *);
#endif
