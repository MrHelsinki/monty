#include "monty.h"

dtContainer Cnt = {NULL, NULL, NULL, false};
/**
 * main - function main
 * @argc: number of cmd-line argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;

	if (argc != 2)
		errHandler("USAGE: monty file", -1, &stack);

	_fileOpener(argv[1]);
	_fileReader(NULL, 0, 0, &stack);
	_fileCloser(stack, 0);

	return (0);
}
