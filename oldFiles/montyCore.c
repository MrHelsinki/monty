#include "monty.h"

dtContainer Cnt = {NULL, NULL, NULL, false};

/**
 * trigger - initiate the program
 * @argsCount: number of cmd-line args
 * @argsValue: array of cmd-line arg values
 * @Cnt: pointer to dtcontainer struct
 */
void trigger(int argsCount, char **argsValue, dtContainer *Cnt)
{
	stack_t *stack = NULL;

	if (argsCount != 2)
	{
	fprintf(stderr, "USage: %s\n", argsValue[0]);
	exit(EXIT_FAILURE);
	}

	fileOpener(&Cnt->file, argsValue[1]);

	procFile(Cnt->file, NULL, 0);
	fclose(Cnt->file);

	onExit(&stack, EXIT_SUCCESS);
}
/**
 * onExit - clean and exit
 * @stack: pointer to stack
 * @log: exit log value
 */
void onExit(stack_t **stack, int log)
{
	freeStack(stack);

	if (Cnt.extractedArgs)
		free(Cnt.extractedArgs);

	exit(log);
}
