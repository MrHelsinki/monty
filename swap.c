#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack list
 * @line_number: the line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *i;
	stack_t *j;
	int count;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack);
	count = 1;

	while (i->next != NULL)
	{
		i = i->next;
		count++;
	}

	if (count < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	j = (*stack);
	i = j->next;
	j->next = i->next;
	j->prev = i;
	i->next = j;
	i->prev = NULL;
	*stack = i;
}
