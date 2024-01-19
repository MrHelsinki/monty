#include "monty.h"
/**
 * Exe - executes command based on given data
 * @oc: opcode
 * @sk: pointer to the stack
 * @lc: line_number in the file
 * @fl: pointer to the processed file
 * @op: arrays of operations
 * Return: exe status
 */

int Exe(char *oc, stack_t **sk, unsigned int lc, FILE *fl, instruction_t *op)
{
	unsigned short i = 0;
	(void)fl;

	while (op[i].opcode && oc)
	{
		if (strcmp(oc, op[i].opcode) == 0)
		{
		op[i].f(sk, lc);
		return (0);
		}
		i++;
	}
	return (1);
}
