#include <stdio.h>
#include <stdlib.h>

/**Simple shell
*
*return 0;
*
*/

int main() {
    char *line = NULL;
    size_t len = 0;

    while (1) {
        line = NULL;  /* Reset line pointer to NULL*/

        if (getline(&line, &len, stdin) == -1) {
            break;  /*End loop when getline returns -1 (end of input)*/
        }

        printf("Read: %s", line);
    }

    free(line);  /*Don't forget to free the allocated memory*/

    return 0;
}
