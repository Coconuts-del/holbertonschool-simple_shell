int main(int argc, char *argv[], char *envp[])
{
  char *line , *command_path;
  char **commands;
  int status =0 , return_code = 0 , interactive = 0;

  (void)argc;
  (void)argv;

  if (isatty(STDIN_FILENO) == 1)
    {
      interactive = 1;
    }

  do
    {
      if (interactive)
	{
	  printf("#prompt$ ");
	}

      line = read_line();
      if (line == NULL)
	{
	  if (!interactive)
	    {
	      break;
	    }
	  else
	    {
	      continue;
	    }
	}



      commands = split_line(line);

      if (commands[0])
	{
	  if   ((strcmp(commands[0], "exit") == 0)  ||  (strcmp(commands[0], "EXIT") == 0))
	    {
	      status = 1;
	    }
	  else
	    {
	      command_path = get_command_path(commands[0]);

	      if (command_path == NULL)
		{
		  printf("%s: command not found\n", commands[0]);
		}
	      else
		{

		  execute(command_path, commands, envp);


		  if (command_path != commands[0])
		    {
		      free(command_path);

		    }

		}
	    }
	}
      free(commands);
      free(line);
      line = NULL;
    } while (!status);

  return (return_code);
}
