#include "main.h"


/**
 *print_most_numbers - Prints all numbers except for 2 and 4
 *followed by a new line
 *@i: number to be printed
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i != 2 && i != 4)
			putchar(i + '0');
	putchar('\n');
}
