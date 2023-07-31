#include "main.h"


/**
 *_strspn - Gets the length of prefix substring
 *@s: String to search
 *@accept: The characters to search for
 *
 *Return: Returns the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (i);
}
