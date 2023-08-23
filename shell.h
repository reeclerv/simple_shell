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
void promptDisp(int is_interactive);
ssize_t inputRead(char *cmd);
void exec_cmd(const char *cmd, const char *argv0);

/* Author: reeclerv */
#endif /* SHELL_H */
