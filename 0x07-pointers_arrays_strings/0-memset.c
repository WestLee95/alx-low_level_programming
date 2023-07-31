#include "main.h"


/**
 *_memset - Fills the memory with a constant byte
 *@s: Pointer to memory area
 *@b: Constant byte
 *@n: Number of bytes to fill
 *
 *Return: Pointer to filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
