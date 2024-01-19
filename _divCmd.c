#include "monty.h"
/**
 * _divCmd - perform division for top two elements(second & top)
 * @stack: pointer to stack head
 * @lnCount: line number in monty file
 * @topStk: pointer to top element of stack
 */
void _divCmd(stack_t **stack, unsigned int lnCount, stack_t *topStk)
{
	topStk = *stack;

	if (!topStk || !topStk->next)
	{
	if (topStk->n == 0)
	{
	_exceptionHandler(stack, lnCount, "L%d: division by zero\n");
	}
	else
	{
	_exceptionHandler(stack, lnCount, "L%d: can't div, stack too short\n");
	}
	}
	topStk->next->n /= topStk->n;
	*stack = topStk->next;
	free(topStk);
}
