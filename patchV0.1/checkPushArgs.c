#include "monty.h"
/**
 * checkPushArgs - checks the validity of args for push op
 * @args: string containing the args to be checked
 * @lnCount: line-number
 * @stack: pointer to the stack struct
 */
void checkPushArgs(const char *args, unsigned int lnCount, stack_t **stack)
{
	int j = 0;

	if (args == NULL || args[0] == '\0')
	{
	fprintf(stderr, "L%d: usage: push integer\n", lnCount);
	clean(stack, Cnt.file);
	exit(EXIT_FAILURE);
	}

	j = (args[0] == '-') ? 1 : 0;

	while (args[j] != '\0')
	{
	if (args[j] < '0' || args[j] > '9')
	{
		fprintf(stderr, "L%d: usage: push integer\n", lnCount);
		clean(stack, Cnt.file);
		exit(EXIT_FAILURE);
	}
	j++;
	}
}
