#include "monty.h"
/**
 *
 */
void printAll(stack_t **stack, unsigned int lnCount) {
  stack_t *head = NULL;
  (void)lnCount;
  
    head = *stack;

    if (head == NULL)
        return;

    while (head) {
        printf("%d\n", head->n);
        head = head->next;
    }

    freeStack(stack);
}
