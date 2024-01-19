#include "monty.h"
/**
 * execOp - executes the operation base on the opcode
 * @ocd: the operation code to be exec
 * @stk: pointer to the stack
 * @lC: Line_number
 * @fl: pointer to the processed file
 * @op: array of operations
 */
void execOp(char *ocd, stack_t **stk, short lC, FILE *fl, instruction_t *op)
{
	unsigned int i = 0;

	if (ocd)
	{
		while (op[i].opcode)
		{
		if (strcmp(ocd, op[i].opcode) == 0)
		{
		op[i].f(stk, lC);
		return;
		}
		i++;
		}
	}
	else
		errHandler("NULL opcode", lC, stk, fl);

	errHandler("unknown instruction", lC, stk, fl);
}
