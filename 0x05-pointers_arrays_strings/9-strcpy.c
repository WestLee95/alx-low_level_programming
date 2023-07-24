#include "main.h"


/**
 *_strcpy - Copies a string
 *@dest: The destination buffer
 *@src: The source buffer
 *
 * Return: Pointr to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
