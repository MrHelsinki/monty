#include "monty.h"
/**
 * _fileReader - reads a line from file
 * @data: bfr to store line read
 * @size: buffer size
 * @lnCount: processed line_number
 * @stk: pointer to stack top
 */
void _fileReader(char *data, size_t size, unsigned int lnCount, stack_t **stk)
{
	ssize_t readdt;

	readdt = 1;

	while (readdt > 0)
	{
	data = NULL;
	readdt = getline(&data, &size, Cnt.file);
	Cnt.data = data;
	lnCount++;
		if (readdt > 0)
			execCmds(data, stk, lnCount, Cnt.file);
	free(data);
	}
}
