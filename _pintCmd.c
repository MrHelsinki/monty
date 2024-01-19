#include "monty.h"
/**
 * _pintCmd - pint value at top of stack
 * @stack: double_ptr to stack top
 * @lnCount: line number in monty file
 */
void _pintCmd(stack_t **stack, unsigned int lnCount)
{
	if (*stack == NULL)
		errHandler("Error: can't pint, stack empty", lnCount, stack);
	printf("%d\n", (*stack)->n);
}
