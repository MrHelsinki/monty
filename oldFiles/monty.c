#include "monty.h"

instruction_t operations[] = {
    {"push", pushToStack},
    {"pall", printAll},
    {NULL, NULL}
};

dtContainer Cnt = {NULL, NULL, NULL, false};
/**
 * main - function main
 * @argc: number of cmd-line argument count
 * @argv: argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv) {
    trigger(argc, argv, &Cnt);
    return (0);
}
