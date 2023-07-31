#include "main.h"


/**
 *_strpbrk - Searches a string for any of a set of bytes
 *@s: String to be searched
 *@accept: Bytes to search for
 *
 *Return: Returns a pointer to the byte in s
 *that matches one of the bytes in accept
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}

	return (NULL);
}
