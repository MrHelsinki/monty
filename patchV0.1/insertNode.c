#include "monty.h"
/**
 * insertNode - creates a new node
 * @stack: pointer to stack struct
 * @n: number to be stored in new node
 */
void insertNode(stack_t **stack, int n)
{
	stack_t *newNd = malloc(sizeof(stack_t));

	if (newNd == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	clean(stack, Cnt.file);
	exit(EXIT_FAILURE);
	}

	newNd->n = n;
	newNd->next = (*stack);
	newNd->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = newNd;

	(*stack) = newNd;
}
