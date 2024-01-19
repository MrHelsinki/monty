#include "monty.h"
/**
 * freeStack - frees stack
 * @stack: pointer to stack_t
 */
void freeStack(stack_t *stack)
{
	stack_t *thisStk = stack;

	while (stack)
	{
	thisStk = (stack)->next;
	free(stack);
	stack = thisStk;
	}
}
