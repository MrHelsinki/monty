#include "monty.h"
/**
 * execCmd - executes command based on given data
 * @data: string that holds a cmd and args
 * @stack: pointer to the stack top
 * @lnCount: line_number in the file
 * @file: pointer to the processed file
 */
void execCmd(char *data, stack_t **stack, FILE *file, unsigned int lnCount)
{
    char *opcode = strtok(data, DELIMITER);
    char *extractedArgs = strtok(NULL, DELIMITER);

    if (extractedArgs) {
      Cnt.extractedArgs = strdup(extractedArgs);
        Cnt.extractedArgs = strdup(extractedArgs);
        if (Cnt.extractedArgs == NULL) {
            fprintf(stderr, "Err: strdup failed\n");
            clean(stack, file);
            exit(EXIT_FAILURE);
        }
    }


    execOpcode(opcode, stack, lnCount, file);

    if (data) {
        free(data);
    }

    if (Cnt.extractedArgs) {
        free(Cnt.extractedArgs);
        Cnt.extractedArgs = NULL;
    }
}
