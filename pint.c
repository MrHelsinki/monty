#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @stack: the stack list
 * @line_number: the line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *i;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	printf("%d\n", i->n);
}
