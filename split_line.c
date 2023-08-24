#include "shell.h"
/**
 * split_line - Parses a line into an array of commands
 * @line: The input line to parse
 * Return: A pointer to an array of commands
 *
 */
char **split_line(char *line)
{
	char **commands;
	char *command;
	int count = 0;

	commands = malloc(sizeof(char *) * (strlen(line) + 1));
	if (!commands)
	{
		fprintf(stderr, "allocation error in parse_line: commands\n");
		exit(EXIT_FAILURE);
	}


	command = strtok(line, " ");
	while (command)
	{
		commands[count++] = command;
		command = strtok(NULL, " ");
	}
	commands[count] = NULL;
	return (commands);
}
