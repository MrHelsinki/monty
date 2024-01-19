#include "monty.h"
/**
 * _exceptionHandler - handles pop exceptions during exec
 * @stack: pointer to the stack
 * @lnCount: line number where exception occured
 * @Msg: error message to be displayed
 */
void _exceptionHandler(stack_t **stack, unsigned int lnCount, const char *Msg)
{
	fprintf(stderr, Msg, lnCount);
	fclose(Cnt.file);
	free(Cnt.data);
	freeStack(*stack);
	exit(EXIT_FAILURE);
	/*
	 * fileCloser(*stack);
	 * free(Cnt.data);
	 * exit(EXIT_FAILURE);
	*/
}
