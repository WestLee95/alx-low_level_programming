#include "main.h"


/**
 *_strchr - Locates a character on the string
 *@s: The string to search
 *@c: The character to search for
 *
 *Return: Returns pointer to the first sighting of c in s or,
 *NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
