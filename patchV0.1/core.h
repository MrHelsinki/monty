#ifndef CORE_H
#define CORE_H

#include "monty.h"

/**
 * struct Container - container for parsing informations
 * @file: file processed
 * @data: data to read from the file
 * @extractedArgs: arguments extracted from the data
 * @switcher: list indicator
 */
typedef struct Container
{
	FILE *file;
	char *data;
	char *extractedArgs;
	bool switcher = false;
	
} dtContainer;

ssize_t *readLineFromFile(char **, unsigned int *, FILE *);
void procFile(File *, char *, unsigned int);
void execCmd(char *, stack_t **, unsigned int, FILE *);
void onExit(stack_t *, int);
void trigger(int, char **);
#endif /* CORE_H */
