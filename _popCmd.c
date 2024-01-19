#include "monty.h"
/**
 * _popCmd - pops the top element from the stack
 * @stack: double_pointer to top of stack
 * @lnCount: line number in monty file
 * @thisStk: temp pointer to stack top
 */
void _popCmd(stack_t **stack, stack_t *thisStk, unsigned int lnCount)
{
	if (*stack == NULL)
		_exceptionHandler(stack, lnCount, "L%d: can't pop an empty stack\n");

	thisStk = *stack;
	*stack = thisStk->next;
	free(thisStk);
}
