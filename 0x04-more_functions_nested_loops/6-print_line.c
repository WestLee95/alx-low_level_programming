#include "main.h"


/**
 *print_line - Prints lines if n is above 0
 *@n: the number of times the _ should be printed
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar('_');
	putchar('\n');
}
