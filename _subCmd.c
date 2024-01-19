#include "monty.h"
/**
 * _subCmd - subtract top two elements of the stack
 * @stack: pointer to stack head
 * @lnCount: line number in monty file
 * @topStk: pointer
 */
void _subCmd(stack_t **stack, unsigned int lnCount, stack_t *topStk)
{
	topStk = *stack;

	if (!topStk || !topStk->next)
	{
	_exceptionHandler(stack, lnCount, "L%d: can't sub, stack too short\n");
	}

	topStk->next->n -= topStk->n;
	*stack = topStk->next;
	free(topStk);
}
