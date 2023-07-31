#include "main.h"


/**
 *_strstr - Gets the first occurrence of the substring needle 
 *in the string haystack
 *@needle: Substring to be gotten
 *@haystack: String from which to be gotten needle
 *
 *Return: Returns a pointer to the beginning of the located substring
 *or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
				return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
