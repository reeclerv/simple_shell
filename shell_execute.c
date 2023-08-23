#include "shell.h"

/**
* exec_cmd - Execute the user command.
* @command: User input command to execute.
*
*/
void exec_cmd(const char *command)
{
char command_copy[MAX_COMMAND_LENGTH];
pid_t pid;
int status;

strcpy(command_copy, command);

/* Fork a new process */
pid = fork();

if (pid < 0)
{
perror("Fork failed");
return;
}

if (pid == 0)
{  /* Child process */
/* Tokenize the command copy */
char *args[3];
char *token = strtok(command_copy, " ");
args[0] = token;
args[1] = NULL;

/* Execute the command using execve */
if (execve(args[0], args, NULL) == -1)
{
perror("./shell");
_exit(1);
}
}
else
{  /* Parent process */
waitpid(pid, &status, 0);
}
}
/* Author: reeclerv */

