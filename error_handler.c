#include "monty.h"

/**
 * error_handler - prints out any error incurred during the running process
 */

void error_handler(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - handles every file error
 * @argv: The file given
 *
 */

void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}
