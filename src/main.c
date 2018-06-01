/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <unistd.h>
#include <stdbool.h>
#include "rb.h"
#include "mysh.h"

const int SUCCESS = 0;
const int FAILURE = 84;
const int BUFF_SIZE = 142;
const int NB_BUILTINS = 4;

int main(int argc, char **argv, char *const *env)
{
	(void)argc;
	(void)argv;
	char *const *env_cp = env;

	if (env == NULL)
		rb_xerror("env cannot be loaded.\n");
	return (my_sh(env_cp));
}