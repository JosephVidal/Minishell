/*
** EPITECH PROJECT, 2018
** error_handling
** File description:
** error_handling
*/


#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "rb.h"
#include "mysh.h"

bool check_builtins(char **cmd)
{
	static char *builtins[5] = {"cd", "exit", "env", "setenv", "unsetenv"};

	for (int i = 0; i <= 4; i++)
		if (my_strcmp(builtins[i], cmd[0]) == true)
			return (true);
	return (false);
}

char *check_path(char *cmd, char **path)
{
	int i = 0;
	char *command = my_strdup(cmd);

	do {
		if (cmd != NULL)
			free(cmd);
		cmd = my_strdup(command);
		cmd = my_strcat(cmd, path[i]);
		i++;
	} while (access(cmd, F_OK) == -1 && i < 4);
	return (cmd);
}

bool check_cmd(char **cmd, char *const *env, char **path)
{
	char *command = my_strdup(cmd[0]);

	(void)env;
	if (cmd[0][0] == '\0') {
		free(command);
		return (false);
	}
	if (cmd[0][0] != '.' && cmd[0][0] != '/')
		cmd[0] = check_path(cmd[0], path);
	if (access(cmd[0], F_OK) == -1) {
		my_puterr(command);
		my_puterr(": Command not found.\n");
		free(command);
		return (false);
	}
	free(command);
	return (true);
}