#include "main.h"


/**
 *print_diagonal - Prints \ in the terminal if n is above 0
 *@n: the number of times the \ should be printed
 *
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j >= 10)
			putchar(' ');
		putchar('\\');
		}
		putchar('\n');
	}
}
