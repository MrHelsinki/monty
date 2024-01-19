#include "monty.h"
/**
 * _pushToSorQ - pushes to stack or queue
 * @stack: pointer to stack struct
 * @lnCount: line_number (unused)
 */
void _pushToSorQ(stack_t **stack, unsigned int lnCount)
{
	int n = 0;
	(void) lnCount;

	checkPushArgs(Cnt.extractedArgs, lnCount, stack);

	n = atoi(Cnt.extractedArgs);

	if (Cnt.switcher == 0)
		insertNode(stack, n);
	else
		insertQueue(stack, n, "Error: malloc failed\n");

	if (Cnt.extractedArgs)
	{
	free(Cnt.extractedArgs);
	Cnt.extractedArgs = NULL;
	}
}
