#include "shell.h"
/**
 * read_line - Function to read a line from stdin
 *
 * Return: Return line
 *
 */
char *read_line()
{
	char *line = NULL;
	size_t size_line = 0;
	/*int i;*/
	int nread;

	nread  =  getline(&line, &size_line, stdin);
	if (nread == -1)
	{
		free(line);
		/* perror("error in read_line: getline");*/
		/*line = NULL;*/
		exit(1);
	}

	line[strcspn(line, "\n")] = '\0';
	return (line);
}
