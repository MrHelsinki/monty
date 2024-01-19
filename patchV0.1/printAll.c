#include "monty.h"
/**
 * printAll - prints all elements in the stack
 * @stack: pointer to the stack struct
 * @lnCount: line_number(not used)
 */
void printAll(stack_t **stack, unsigned int lnCount)
{
	stack_t *head = NULL;
	(void)lnCount;

	head = *stack;

	if (head == NULL)
		return;

	while (head)
	{
	printf("%d\n", head->n);
	head = head->next;
	}

	freeStack(stack);
}
