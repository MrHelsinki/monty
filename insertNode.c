#include "monty.h"
/**
 * insertNode - creates a new node
 * @stack: pointer to stack struct
 * @n: number to be stored in new node
 */
void insertNode(stack_t **stack, int n)
{
	stack_t *nNode = NULL;
	stack_t *newNd = malloc(sizeof(stack_t));

	nNode = *stack;
	if (newNd == NULL)
		errHandler("Error: malloc failed", -1, stack);

	if (nNode)
		nNode->prev = newNd;

	newNd->n = n;
	newNd->next = (*stack);
	newNd->prev = NULL;

	(*stack) = newNd;
}
