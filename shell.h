#ifndef _SHELL_H_
#define _SHELL_H_

#define SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>


char *read_line();
char **split_line(char *line);
char *get_command_path(char *command);
int execute(char *command_path, char *argv[], char *envp[]);
#endif
