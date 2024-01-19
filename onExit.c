#include "monty.h"
/**
 * _fileCloser - exit file(close)
 * @stack: pointer to stack
 * @log: exit log value(not used)
 */
void _fileCloser(stack_t *stack, int log)
{
	(void)log;
	freeStack(stack);
	fclose(Cnt.file);
}
