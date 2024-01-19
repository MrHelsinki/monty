#include "monty.h"
/**
 * _printAll - prints all elements in stack
 * @stack: double_ptr to top stack
 * @lnCount: line number in monty file (not used)
 */
void _printAll(stack_t **stack, unsigned int lnCount)
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
}
