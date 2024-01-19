#include "monty.h"
/**
 * _pushToSorQ - pushes a value to stack or queue
 * @stack: pointer to stack struct
 * @lnCount: line_number
 * @n: int value to be pushed
 */
void _pushToSorQ(stack_t **stack, unsigned int lnCount, int n)
{
	int i = 0, cnt = 0;
	char chr = '-';

	if (Cnt.extractedArgs)
	{
		if (Cnt.extractedArgs[0] == chr)
			i++;

		for (; Cnt.extractedArgs[i] != '\0'; i++)
		{
		if (Cnt.extractedArgs[i] > '9' || Cnt.extractedArgs[i] < '0')
			cnt = 1;
		}
		if (cnt == 1)
			errHandler("usage: push integer", lnCount, stack);
	}
	else
		errHandler("usage: push integer", lnCount, stack);

	n = atoi(Cnt.extractedArgs);

	if (Cnt.switcher == 0)
		insertNode(stack, n);
	else
		insertQueue(stack, n, "Error: malloc failed\n");
}
