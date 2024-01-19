#include "monty.h"
/**
 * freeStack - frees stack
 * @stack: pointer to stack_t
 */
void freeStack(stack_t **stack)
{
    while (stack && *stack)
    {
        stack_t *st = (*stack)->next;
        free(*stack);
        *stack = st;
    }
}
