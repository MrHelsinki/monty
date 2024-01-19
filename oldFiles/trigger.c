#include "monty.h"
/**
 * trigger - initiate the program
 * @argsCount: number of cmd-line args
 * @argsValue: array of cmd-line arg values
 * @Cnt: pointer to dtcontainer struct
 */
void trigger(int argCount, char **argValue, dtContainer *Cnt) {
    stack_t *stack = NULL;

    if (argCount != 2) {
        fprintf(stderr, "Usage: %s\n", argValue[0]);
        exit(EXIT_FAILURE);
    }

    fileOpener(&Cnt->file, argValue[1]);

    procFile(Cnt->file, NULL, 0);
    fclose(Cnt->file);

    onExit(&stack, EXIT_SUCCESS);
}
