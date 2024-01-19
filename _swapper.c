#include "monty.h"
/**
 * _swapCmd - swaps top two elements of the stack
 * @stack: pointer
 * @lnCount: line number
 * @topStk: pointer to top stack
 */
void _swapCmd(stack_t **stack, unsigned int lnCount, stack_t *topStk)
{
	short temp;

	topStk = *stack;

	if (!topStk || !topStk->next)
	{
	_exceptionHandler(stack, lnCount, "L%d: can't swap, stack too short\n");
	}

	temp = topStk->n;
	topStk->n = topStk->next->n;
	topStk->next->n = temp;
}
