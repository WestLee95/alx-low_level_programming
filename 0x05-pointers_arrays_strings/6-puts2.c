#include "main.h"


/**
 *puts2 - Prints every other character of a string
 *@str: string to be printed
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
