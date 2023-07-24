#include "main.h"


/**
 *_puts - prints the string followed by a new line to stdout
 *@str: pointr that refers to the string to be printed
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
