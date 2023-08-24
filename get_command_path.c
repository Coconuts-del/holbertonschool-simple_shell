#include "shell.h"
/**
 * get_command_path - Function to get command path
 * @path: Path to look for
 * Return: Command path if found, NULL if the command is not found
 *
 */
char *get_command_path(char *path)
{
  char *command_path = NULL;
  if ((path[0] == '/') || (path [0] != '/'))
    {
      if (access(path, X_OK) == 0)
	{
	  command_path = path;
	}
      else
	{
	  char bin_path[] = "/bin/";

	  command_path = malloc(strlen(bin_path) + strlen(path) + 1);
	  strcpy(command_path, bin_path);
	  strcat(command_path, path);
	  if (access(command_path, X_OK) != 0)
	    {
	      free(command_path);
	      command_path = NULL;
	    }

	}
    }
  return (command_path);
}
