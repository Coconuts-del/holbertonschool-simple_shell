#include "shell.h"

/**
 * execute - Function that execute a command
 * @command_path: Path to the command to execute
 * @argv: Arguments for the command
 * @envp: Array of env variables
 * Return: Return 1 on successful execution
 */
int execute(char *command_path, char *argv[], char *envp[])
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(command_path, argv, envp);
		exit(1);
	}
	else if (pid > 0)
	{
		wait(NULL);
	}
	else
	{
		perror("Fork Failed");
		exit(EXIT_FAILURE);
	}
	return (1);
}
