#include "main.h"


/**
 *more_numbers - Prints x10 the numbers from 0 to 14
 *followed by a new line
 *@i: the number to be printed
 *
 */
void more_numbers(void)
{
	int i, j;


	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
