#include "monty.h"
/**
 * insertNode -
 * @stack: 
 * @n: 
 */
void insertNode(stack_t **stack, int n)
{
	stack_t *newNd = malloc(sizeof(stack_t));

	if (newNd == NULL)
	{
	fprintf(stderr, "Err: failed to allocate memory\n");
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
