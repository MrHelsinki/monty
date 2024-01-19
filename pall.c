#include "monty.h"

/**
 * pall - print all values in the stack
 * @stack: The stack list
 * @line_number: the number of the line
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	size_t c = 0;
	stack_t *i;

	if (*stack == NULL)
		return;

	i = *stack;
	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		c++;
	}
}

/**
 * free_dlistint - frees a list
 * @head: The head of the list
 */

void free_list(stack_t **head)
{
	while ((*head) != NULL)
	{
		stack_t *next = (*head)->next;

		free((*head));
		(*head) = next;
	}
}
