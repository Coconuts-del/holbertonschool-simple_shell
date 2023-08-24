#include "shell.h"
/**
 * read_line - Function to read a line from stdin
 *
 * Return: Return line as strinf
 *
 */
char *read_line()
{
  char *line = NULL;
  size_t buffer = 0;

  if (getline(&line, &buffer, stdin) == -1)
    {
      if (feof(stdin))
	{
	  if (isatty(STDIN_FILENO))
	    {
	      printf("\n");
	    }
	  free(line);
	  line = NULL;
	}
      else
	{
	  perror("error in read_line: getline");
	  exit(EXIT_FAILURE);
	}
    }
  else
    {
      line[strcspn(line, "\n")] = '\0';
    }
  return (line);
}
