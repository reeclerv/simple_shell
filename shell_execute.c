#include "shell.h"

/**
* exec_cmd - Execute the user cmd.
* @cmd: User input cmd to execute.
* @argv0: Name of the program.
*/
void exec_cmd(const char *cmd, const char *argv0)
{
char cmd_cpy[MAX_COMMAND_LENGTH];
pid_t prcid;
int stat;

strcpy(cmd_cpy, cmd);

/* Fork a new process */
prcid = fork();

if (prcid < 0)
{
perror(argv0);
return;
}

if (prcid == 0)
{  /* Child process */
/* Tokenize the cmd copy */
char *args[3];
char *token = strtok(cmd_cpy, " ");
args[0] = token;
args[1] = NULL;

/* Execute the cmd using execve */
if (execve(args[0], args, NULL) == -1)
{
perror(argv0);
_exit(1);
}
}
else
{  /* Parent process */
waitpid(prcid, &stat, 0);
}
/* Author: reeclerv */
}
