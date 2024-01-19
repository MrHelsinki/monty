#define _GNU_SOURCE
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

void errHandler(const char *, short, stack_t **);
void execCmds(char *, stack_t **, unsigned int, FILE *);
void freeStack(stack_t *);
void insertQueue(stack_t **, int, const char *);
void _pintCmd(stack_t **, unsigned int);
void _printAll(stack_t **, unsigned int);
void _fileReader(char *, size_t, unsigned int, stack_t **);
void _fileOpener(char *);
void insertNode(stack_t **, int);
void _fileCloser(stack_t *, int);
void _popCmd(stack_t **, stack_t *, unsigned int);
void _pushToSorQ(stack_t **, unsigned int, int);
void _swapCmd(stack_t **, unsigned int, stack_t *);
void _exceptionHandler(stack_t **, unsigned int, const char *);
void _addCmd(stack_t **, unsigned int, stack_t *);
void _nopCmd(stack_t **, unsigned int);
void _divCmd(stack_t **, unsigned int, stack_t *);
void _subCmd(stack_t **, unsigned int, stack_t *);
void _mulCmd(stack_t **, unsigned int, stack_t *);
#endif /* main.h */
