#include "monty.h"
#include <unistd.h>
/**
 * insertQueue - inserts a new node with a given val
 * @stack: pointer to stack struct
 * @n: int val to be stored
 * @errMsg: error msg to be displayed
 */
void insertQueue(stack_t **stack, int n, const char *errMsg)
{
	stack_t *newNd, *prevNd;

	newNd = (stack_t *)malloc(sizeof(stack_t));

	if (newNd != NULL)
	{
	newNd->n = n;
	newNd->next = NULL;

	if ((*stack) == NULL)
	{
	(*stack) = newNd;
	newNd->prev = NULL;
	}
	else
	{
		prevNd = (*stack);

		while (prevNd->next != NULL)
			prevNd = prevNd->next;

		prevNd->next = newNd;
		newNd->prev = prevNd;
	}
	}
	else
	{
	write(STDERR_FILENO, errMsg, strlen(errMsg));
	clean(stack, Cnt.file);
	exit(EXIT_FAILURE);
	}
}
