#include "monty.h"
/**
 * fileOpener - opens a file
 * @file: pointer to the file struct to store opened file
 * @fname: name of the file to be opened
 */
void fileOpener(FILE **file, char *fname)
{
    *file = fopen(fname, "r");
    if (!*file) {
        fprintf(stderr, "Err: failed to open file %s\n", fname);
        exit(EXIT_FAILURE);
    }
}
