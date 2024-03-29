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


ssize_t readCmd(char **, size_t *, unsigned int *, FILE *, char **);
void execOp(char *, stack_t **, short, FILE *, instruction_t *);
int execCmd(char *, stack_t **, FILE *, unsigned int);
void procFile(FILE *, char *, unsigned int);
void errHandler(const char *, short, stack_t **, FILE *);
void clean(stack_t **, FILE *);
void onExit(stack_t **, int);
void freeStack(stack_t **);
void insertNode(stack_t **, int);
void insertQueue(stack_t **, int, const char *);
void checkPushArgs(const char *, unsigned int, stack_t **);
void _pushToSorQ(stack_t **, unsigned int);
void printAll(stack_t **, unsigned int);
void fileOpener(FILE **, char *);
void trigger(int, char **, dtContainer *);
void onExit(stack_t **, int);
char *_strDuplicate(char *);
void handleUnk(int, char *, FILE *, char *, stack_t **);
int Exe(char *, stack_t **, unsigned int, FILE *, instruction_t *);
#endif /* main.h */
