/*
** EPITECH PROJECT, 2018
** builtins
** File description:
** builtins
*/

#include "my.h"
#include "rb.h"
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

void cd(char **cmd, char *const *env)
{
	(void)cmd;
	(void)env;
	return;
}
