#include "shell.h"

/**
 * read_input - Read input from the user.
 * @command: Buffer to store the user input.
 * Return: Number of bytes read.
 */
ssize_t inputRead(char *command) {
    ssize_t readNumber = read(0, command, sizeof(command));
    if (readNumber > 0 && command[readNumber - 1] == '\n') {
        command[readNumber - 1] = '\0';
    }
    return readNumber;
}

/**
 * display_prompt - Display the shell prompt.
 * @is_interactive: Indicates if the shell is in interactive mode.
 */
void promptDisp(int is_interactive) {
    if (is_interactive) {
        char *prompt = "#cisfun$ ";
        write(1, prompt, strlen(prompt));
    }
}

/* Author: reeclerv */
