#include "shell.h"

/**
 * display_prompt - Display the shell prompt.
 * @is_interactive: Indicates if the shell is in interactive mode.
 */
void display_prompt(int is_interactive) {
    if (is_interactive) {
        write(1, "simple_shell$ ", 14);
    }
}
/* Author: reeclerv */

/**
 * read_input - Read input from the user.
 * @command: Buffer to store the user input.
 * Return: Number of bytes read.
 */
ssize_t read_input(char *command) {
    ssize_t num_read = read(0, command, sizeof(command));
    if (num_read > 0 && command[num_read - 1] == '\n') {
        command[num_read - 1] = '\0';
    }
    return num_read;
}
/* Author: reeclerv */
