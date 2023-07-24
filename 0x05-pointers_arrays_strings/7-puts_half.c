#include "main.h"


/**
 *puts_half - Prints half of the string
 *@str: String to be printed
 *
 *
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	j = i / 2;
	if (i % 2 == 1)
	{
		j += 1;
	}

	for (; j < i; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
