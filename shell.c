#include "shell.h"
/**
 * main - Main function for the simple shell
 * @argc: Argument count
 * @argv: Array of argument
 * @envp: Array of env variables
 * Return: Return code of the command execution
 */
int main(__attribute__((unused))int argc, char *argv[], char *envp[])
{
	char *line, *command_path;
	char **commands;
	int status = 1, interactive = 0;

	if (isatty(STDIN_FILENO) == 1)
		interactive = 1;
	while (status)
	{
		if (interactive)
			printf("#prompt$ ");
		line = read_line();
		if (line == NULL)
		{
			if (!interactive)
				break;
			continue;
		}
		commands = split_line(line);
		if (commands[0])
		{
			if (strcmp(commands[0], "exit") == 0 || strcmp(commands[0], "EXIT") == 0)
				status = 0;
			else
			{
				command_path = get_command_path(commands[0]);
				if (command_path == NULL)
					printf("%s: No such file or directory\n", argv[0]);
				else
				{
					execute(command_path, commands, envp);
					if (command_path != commands[0])
						free(command_path);
				}
			}
		}
		free(commands);
		free(line);
		line = NULL;
	}
	return (0);
}
