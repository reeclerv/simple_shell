#include "shell.h"

/**
 * main - Entry point of the shell program.
 * @argc: Number of cmd-line arguments.
 * @argv: Array of cmd-line arguments.
 * Return: Exit status.
 */

int main(int argc, char *argv[])
{
int is_interactive = isatty(0);

while (1)
{
char cmd[MAX_COMMAND_LENGTH];
ssize_t num_read;
num_read = argc;

promptDisp(is_interactive);

num_read = inputRead(cmd);
if (num_read == 0)
{
if (is_interactive)
{
write(1, "\n", 1);
}
break;
}

exec_cmd(cmd, argv[0]);
}
return (0);
}
/* Author: reeclerv */

