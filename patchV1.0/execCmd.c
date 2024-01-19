#include "monty.h"
/**
 * execCmd - executes command based on given data
 * @data: string that holds a cmd and args
 * @stack: pointer to the stack top
 * @lnCount: line_number in the file
 * @file: pointer to the processed file
 * Return: exe status
 */
int execCmd(char *data, stack_t **stack, FILE *file, unsigned int lnCount)
{
	instruction_t operations[] = {
		{"push", _pushToSorQ},
		{"pall", printAll},
		{NULL, NULL}
	};

	char *opcode = strtok(data, DELIMITER);
	char *extractedArgs = strtok(NULL, DELIMITER);
	int exec;

	if (extractedArgs)
	{
	Cnt.extractedArgs = _strDuplicate(extractedArgs);
		if (Cnt.extractedArgs == NULL)
		{
		fprintf(stderr, "Error: strdup failed\n");
		clean(stack, file);
		exit(EXIT_FAILURE);
		}
	}
	else
		Cnt.extractedArgs = NULL;

	exec = Exe(opcode, stack, lnCount, file, operations);

	if (exec == 1)
		handleUnk(lnCount, opcode, file, data, stack);

	if (Cnt.extractedArgs)
	{
	free(Cnt.extractedArgs);
	Cnt.extractedArgs = NULL;
	}

	return (exec);
}
