#include "shell.h"

/**
 * main - Entry point of the shell program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: Exit status.
 */
int main(int argc, char *argv[]) {
    int is_interactive = isatty(0);

    while (1) {
        char command[MAX_COMMAND_LENGTH];
        ssize_t num_read;

        display_prompt(is_interactive);

        num_read = read_input(command);
        if (num_read == 0) {
            if (is_interactive) {
                write(1, "\n", 1);
            }
            break;
        }

        execute_command(command);
    }

    return 0;
}
/* Author: reeclerv */
