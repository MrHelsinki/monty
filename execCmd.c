#include "monty.h"
/**
 * execCmds - executes command based on given data
 * @data: cmd data to get exec
 * @stack: pointer to the stack
 * @lnCount: line_number of the cmd in the file
 * @file: pointer to the processed file
 */
void execCmds(char *data, stack_t **stack, unsigned int lnCount, FILE *file)
{
	int valHolder = 0;
	char charHolder = '#', *opcode = strtok(data, DELIMITER);
	(void)file;

	if (!opcode || opcode[0] == charHolder)
		return;

	Cnt.extractedArgs = strtok(NULL, DELIMITER);

	if (strcmp(opcode, "push") == 0)
	{
		if (!Cnt.extractedArgs)
			errHandler("usage: push integer", lnCount, stack);
		valHolder = atoi(Cnt.extractedArgs);
		insertNode(stack, valHolder);
	}
	else if (strcmp(opcode, "pall") == 0)
		_printAll(stack, lnCount);
	else if (strcmp(opcode, "pint") == 0)
		_pintCmd(stack, lnCount);
	else if (strcmp(opcode, "pop") == 0)
		_popCmd(stack, NULL, lnCount);
	else if (strcmp(opcode, "swap") == 0)
		_swapCmd(stack, lnCount, NULL);
	else if (strcmp(opcode, "add") == 0)
		_addCmd(stack, lnCount, NULL);
	else if (strcmp(opcode, "sub") == 0)
		_subCmd(stack, lnCount, NULL);
	else if (strcmp(opcode, "div") == 0)
		_divCmd(stack, lnCount, NULL);
	else if (strcmp(opcode, "mul") == 0)
		_mulCmd(stack, lnCount, NULL);
	else if (strcmp(opcode, "nop") == 0)
		_nopCmd(stack, lnCount);
}
