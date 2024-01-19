#include "monty.h"
/**
 * procFile - processes the file to be fed
 * @file: file to get processed
 * @data: pointer to the buffer storing the line
 * @line_number: pointer to the line_number
 */
void procFile(FILE *file, char *data, unsigned int line_number)
{
	size_t size = 0;
	stack_t *stack = NULL;
	ssize_t readdt = 1;

	while (readdt > 0)
	{
	data = NULL;
	readdt = readCmd(&data, &size, &line_number, file, &data);
	line_number++;

	if (readdt > 0)
	{
		execCmd(data, &stack, file, line_number);
		free(data);
	}
	}

	freeStack(&stack);
}
