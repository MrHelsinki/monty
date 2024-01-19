#include "monty.h"
/**
 * readCmd - reads a line from file
 * @bfr: pointer to the buffer storing line
 * @lC: pointer
 * @fl: file to read from
 * @sz: pointer to size of buffer
 * @dt: data pointer
 * Return: size of read data
 */
ssize_t readCmd(char **bfr, size_t *sz, unsigned int *lC, FILE *fl, char **dt)
{
	ssize_t readdt;
	*bfr = NULL;

	readdt = getline(bfr, sz, fl);

	if (readdt > 0)
	{
	(*lC)++;
	return (readdt);
	}
	else if (readdt == -1)
	{
		if (*bfr)
		{
		free(*bfr);
		*bfr = NULL;
		}

		if (*dt)
		{
		free(*dt);
		*dt = NULL;
		}
	onExit(NULL, EXIT_FAILURE);
	}

	return (0);
}
