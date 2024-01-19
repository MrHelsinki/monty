#include "monty.h"
/**
 * onExit - clean and exit
 * @stack: pointer to stack
 * @log: exit log value
 */
void onExit(stack_t **stack, int log)
{
	if (stack != NULL)
	{
	freeStack(stack);
	*stack = NULL;
	}

	if (Cnt.extractedArgs)
	{
		free(Cnt.extractedArgs);
	}

	if (Cnt.data)
	{
	free(Cnt.data);
	Cnt.data = NULL;
	}

	clean(stack, Cnt.file);
	exit(log);
}
