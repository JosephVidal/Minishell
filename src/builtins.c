/*
** EPITECH PROJECT, 2018
** builtins
** File description:
** builtins
*/


#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "mysh.h"

void echo(char *str)
{
	my_putstr(str);
}

void my_exit(int nb)
{
	my_putstr("exit\n");
	exit(nb);
}
