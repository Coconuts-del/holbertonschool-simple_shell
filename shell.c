#include "shell.h"
#include <stdbool.h>

int main(__attribute__((unused))int argc, char *argv[], char *envp[])
{
  char *line, *command_path;
  char **commands;
  bool interactive_mode = isatty(STDIN_FILENO);
  while (1)
    {
      if (interactive_mode)
	printf("#prompt$ ");

      line = read_line();
      if (line == NULL)
	break;

      commands = split_line(line);
      if (commands[0])
	{
	  if (strcmp(commands[0], "exit") == 0)
	    break;

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

      free(commands);
      free(line);
      line = NULL;
    }

  return 0;
}
