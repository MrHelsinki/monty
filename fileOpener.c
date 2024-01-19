#include "monty.h"
/**
 * _fileOpener - opens a file
 * @fname: name of file
 */
void _fileOpener(char *fname)
{
	Cnt.file = fopen(fname, "r");

	if (!Cnt.file)
		errHandler("Error: Can't open file", -1, NULL);
}
