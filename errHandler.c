#include "monty.h"
/**
 * errHandler - handles errors during exec
 * @msg: error message to be printed
 * @lnNumber: line_number where error occurred
 * @stack: pointer to stack top
 */
void errHandler(const char *msg, short lnNumber, stack_t **stack)
{
	const char *errMsg[] = {
		"", "NULL opcode",
		"unknown instruction",
		"strdup failed",
		"Error: malloc failed",
		"usage: push integer",
		"unknown instruction",
		"Can't pint, stack empty",
		"Can't pop an empty stack",
		"Error: Can't open the file"
	};

	if (lnNumber >= 0)
	{
	fprintf(stderr, "L%d: %s%s\n", lnNumber, msg, errMsg[lnNumber]);
	}
	else
		fprintf(stderr, "%s\n", msg);

	if (stack && *stack && lnNumber != -9)
		freeStack(*stack);

	if (Cnt.data)
		free(Cnt.data);

	if (Cnt.extractedArgs)
		free(Cnt.extractedArgs);

	exit(EXIT_FAILURE);
}
