#include "monty.h"
/**
 * errHandler - handles errors during exec
 * @msg: error message to be printed
 * @lnNumber: line_number where error occurred
 * @stack: pointer to stack top
 * @file: pointer to processed file
 */

void errHandler(const char *msg, short lnNumber, stack_t **stack, FILE *file) {
    const char *errMsg = "L%d: %s\n";
    fprintf(stderr, errMsg, lnNumber, msg);
    clean(stack, file);
    exit(EXIT_FAILURE);
}
