#include "shell.h"
/**
 * main - Main function for the simple shell
 * @argc: Argument count
 * @argv: Array of argument
 * @envp: Array of env variables
 * Return: Return code of the command execution
 */

int main(int argc, char *argv[], char *envp[])
{
	char *line, *command_path;
	char **commands;
	int status = 1;

	if (argc > 1)
	{
		line = read_line();
		if (line == NULL)
			return (1);
		commands = split_line(line);
		if (commands[0])
		{
			command_path = get_command_path(commands[0]);
			if (command_path == NULL)
				printf("%s: Command not found\n", commands[0]);
			else
			{
				execute(command_path, commands, envp);
				free(command_path);
			}
		}
		free(commands);
		free(line);
	}
	else
	{
		while (status)
		{
			if (isatty(STDIN_FILENO))
				printf("#prompt$ ");
			line = read_line();
			if (line == NULL)
				continue;
			commands = split_line(line);
			if (commands[0])
			{
				if (strcmp(commands[0], "exit") == 0)
					status = 0;
				else
				{
					command_path = get_command_path(commands[0]);
					if (command_path == NULL)
						printf("%s: Command not found\n", argv[0]);
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
	}
	return (0);
}
