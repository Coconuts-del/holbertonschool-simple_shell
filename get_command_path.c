#include "shell.h"

/**
 * get_command_path - Function to get command path
 * @command: Command name to look for
 * Return: Command path if found, NULL if the command is not found
 */
char *get_command_path(char *command)
{
	char *command_path = NULL;
	char *path_env = getenv("PATH");
	char bin_path[SIZE];

	if (path_env != NULL)
	{
		char *path_copy = strdup(path_env);
		char *token = strtok(path_copy, ":");

		while (token != NULL && command_path == NULL)
		{
			strcpy(bin_path, token);
			command_path = malloc(strlen(bin_path) + strlen(command) + 2);
			if (command_path != NULL)
			{
				strcat(bin_path, "/");
				strcat(bin_path, command);
				if (access(bin_path, X_OK) == 0)
				{
					strcpy(command_path, bin_path);
					/*  break; // Command found in this path*/
				}
				else
				{
					free(command_path);
					command_path = NULL;
				}
			}
			token = strtok(NULL, ":");
		}
		free(path_copy);
	}
	return (command_path);
}
