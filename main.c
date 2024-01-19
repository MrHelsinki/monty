#include "monty.h"

/**
 * main - The entry point of the program
 * @argc: arguement count
 * @argv: arguement array
 * Return: Success
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char buffer[132];
	int bufsize = sizeof(buffer);
	unsigned int line_number = 1;
	char *str = NULL;
	stack_t *stack = NULL;

	if (argc != 2)
		error_handler();
	fp = fopen(argv[1], "r");
	if (fp == NULL)
		file_error(argv[1]);

	while (fgets(buffer, bufsize, fp) != NULL)
	{
		if (*buffer == '\n')
		{
			line_number++;
			continue;
		}
		str = strtok(buffer, " \t\n$");
		if (!str || *str == '$')
		{
			line_number++;
			continue;
		}
		global.argument = strtok(NULL, " \t\n$");
		opcode(&stack, line_number, str);
		line_number++;
	}

	free_list(&stack);
	fclose(fp);
	return (1);
}

