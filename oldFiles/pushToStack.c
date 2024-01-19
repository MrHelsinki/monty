#include "monty.h"
/**
 *
 */

void pushToStack(stack_t **stack, unsigned int lnCount) {
  int n = 0;
  checkPushArgs(Cnt.extractedArgs, lnCount, stack);

    n = atoi(Cnt.extractedArgs);

    if (Cnt.switcher == 0) {
        insertNode(stack, n);
    } else {
        insertQueue(stack, n, "Err: failed allocation\n");
    }

}
