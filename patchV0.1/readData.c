#include "monty.h"
/**
 * readCmd - reads a line from file
 * @buffer: pointer to the buffer storing line
 * @lnCount: pointer
 * @file: file to read from
 * @size: pointer to size of buffer
 * Return: number of chars read as ssize_t
 */
ssize_t readCmd(char **buffer, size_t *size, unsigned int *lnCount, FILE *file)
{
	ssize_t readdt;
	*buffer = NULL;

	readdt = getline(buffer, size, file);

	if (readdt > 0)
	{
	(*lnCount)++;
	return (readdt);
	}
	else if (readdt == -1)
	{
		if (*buffer)
		{
		free(*buffer);
		*buffer = NULL;
		}
	onExit(NULL, EXIT_FAILURE);
	}

	return (0);
}
