#include "main.h"


/**
 *_puts - Prints the string followed by a new line to stdout
 *@str: This pointer refers to string to be printed
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
