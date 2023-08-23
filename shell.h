#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

#define MAX_COMMAND_LENGTH 100

/* Function prototypes */
void display_prompt(int is_interactive);
ssize_t read_input(char *command);
void execute_command(const char *command);

#endif /* SHELL_H */
/* Author: reeclerv */
