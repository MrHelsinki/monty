#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

#define DELIMITER " \n\t"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern instruction_t operations[];

/**
 * struct Container - container for parsing informations
 * @file: file processed
 * @data: data to read from the file
 * @extractedArgs: arguments extracted from the data
 * @switcher: list indicator
 */
typedef struct
{
	FILE *file;
	char *data;
	char *extractedArgs;
	bool switcher;
	
	} dtContainer;
extern dtContainer Cnt;


ssize_t readLineFromFile(char **buffer, size_t *size, unsigned int *lnCount, FILE *file);

void execOpcode(char *opcode, stack_t **stack, short lnCount, FILE *file);
void execCmd(char *data, stack_t **stack, FILE *file, unsigned int lnCount);


void procFile(FILE *file, char *data, unsigned int line_number);

void errHandler(const char *msg, short lnNumber, stack_t **stack, FILE *file);

void clean(stack_t **stack, FILE *file);


void onExit(stack_t **stack, int log);
void freeStack(stack_t **stack);

void insertNode(stack_t **, int);

void insertQueue(stack_t **stack, int n, const char *errMsg);

void checkPushArgs(const char *args, unsigned int lnCount, stack_t **stack);

void pushToStack(stack_t **stack, unsigned int lnCount);

void printAll(stack_t **stack, unsigned int lnCount);
void fileOpener(FILE **file, char *fname);
void trigger(int argCount, char **argValue, dtContainer *Cnt);
void onExit(stack_t **stack, int log);
#endif /* main.h */
