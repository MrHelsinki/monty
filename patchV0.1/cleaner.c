#include "monty.h"
/**
 * clean - frees allocated memory & close file stream
 * @stack: pointer to stack top
 * @file: pointer to processed file
 */
void clean(stack_t **stack, FILE *file)
{
	(void) file;

	if (Cnt.extractedArgs)
		free(Cnt.extractedArgs);

	if (Cnt.file)
		fclose(Cnt.file);

	freeStack(stack);
}
