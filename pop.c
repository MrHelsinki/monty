#include "monty.h"

/**
 * pop - remove the element at the top of the stack
 * @stack: the stack list
 * @line_number: the line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *i;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->next;
	free((*stack));
	(*stack) = i;
	if ((*stack) != NULL)
		(*stack)->prev = NULL;
}
