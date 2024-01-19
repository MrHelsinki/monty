#include "monty.h"
/**
 * handleUnk - handles unknown instructions
 * @lc: line_number
 * @oc: opcode
 * @fl: pointer to the file being processed
 * @dt: string data
 * @stack: pointer to the stack struct
 */
void handleUnk(int lc, char *oc, FILE *fl, char *dt, stack_t **stack)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", lc, oc);
	fclose(fl);
	free(dt);
	freeStack(stack);
	exit(EXIT_FAILURE);
}
