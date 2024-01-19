#include "monty.h"

/**
 * opcode - Matches the monty command to the respective function
 * @stack: The stack list
 * @line_number: The line_number
 * @command: The command to follow
 *
 */

void opcode(stack_t **stack, unsigned int line_number, char *command)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	while (ops[i].opcode)
	{
		if (strcmp(ops[i].opcode, command) == 0)
		{
			ops[i].f(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, command);
	exit(EXIT_FAILURE);
}
