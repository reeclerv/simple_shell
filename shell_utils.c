#include "shell.h"

/**
 * inputRead - Read input from the user.
 * @cmd: Buffer to store the user input.
 * Return: Number of bytes read.
 */
ssize_t inputRead(char *cmd)
{
ssize_t readNumber = read(0, cmd, sizeof(cmd));

if (readNumber > 0 && cmd[readNumber - 1] == '\n')
{
cmd[readNumber - 1] = '\0';
}
return (readNumber);
}

/**
 * promptDisp - Display the shell prompt.
 * @is_interactive: Indicates if the shell is in interactive mode.
 */
void promptDisp(int is_interactive)
{
if (is_interactive)
{
char *prompt = "#cisfun$ ";
write(1, prompt, strlen(prompt));
}
}
