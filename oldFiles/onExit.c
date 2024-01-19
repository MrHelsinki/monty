#include "monty.h"
/**
 * onExit - clean and exit
 * @stack: pointer to stack
 * @log: exit log value
 */
void onExit(stack_t **stack, int log) {
    freeStack(stack);
    if (Cnt.extractedArgs) {
        free(Cnt.extractedArgs);
    }
    exit(log);
}
