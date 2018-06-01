/*
** EPITECH PROJECT, 2018
** mysh
** File description:
** mysh
*/

#include <sys/wait.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "rb.h"
#include "mysh.h"

int my_exec_builtins(char **cmd, char *const *env, char *buff)
{
	if (my_strcmp(cmd[0], "exit") == true) {
		my_free_tab(cmd);
		free(buff);
		exit(SUCCESS);
	}
	if (my_strcmp(cmd[0], "env") == true)
		my_print_tab(env);
	if (my_strcmp(cmd[0], "cd") == true) {
		if (!cmd[1]) {
			my_free_tab(cmd);
			return (SUCCESS);
		}
		if (chdir(cmd[1]) == -1) {
			my_puterr(cmd[1]);
			my_puterr(": No such file or directory.\n");
		}
	}
	my_free_tab(cmd);
	return (SUCCESS);
}

int my_exec(char **cmd, char *const *env, char **path)
{
	int pid = 0;
	int sig = 0;

	if (check_cmd(cmd, env, path) == false) {
		my_free_tab(cmd);
		return (FAILURE);
	}
	pid = fork();
	if (pid == -1) {
		my_puterr("Error: my_exec: fork failed.\n");
		my_free_tab(cmd);
		return (FAILURE);
	}
	if (pid == 0)
		execve(cmd[0], cmd, env);
	else
		waitpid(pid, &sig, 0);
	my_free_tab(cmd);
	return (SUCCESS);
}

int my_sh(char *const *env)
{
	char *buff = NULL;
	char **cmd = NULL;
	size_t buffsize = BUFF_SIZE;
	char *path[4] = {"/usr/local/bin/", "/usr/local/sbin/", "/usr/bin/"
		, "/usr/lib/jvm/default/bin/"};

	while (42) {
		buff = rb_malloc(BUFF_SIZE);
		my_putstr("(\033[031mGildas forever\033[00m) % ");
		if (getline(&buff, &buffsize, stdin) == -1)
			break;
		cmd = rb_strtwa(buff, ' ');
		if (check_builtins(cmd) == true)
			my_exec_builtins(cmd, env, buff);
		else
			my_exec(cmd, env, path);
		free(buff);
	}
	free(buff);
	my_free_tab(cmd);
	return (FAILURE);
}
