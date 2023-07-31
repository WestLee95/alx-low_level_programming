#include "main.h"


/**
 *_strstr - Gets the first occurrence of the substring needle 
 *in the string haystack
 *@n: Substring to be gotten
 *@h: String from which to be gotten needle
 *
 *Return: Returns a pointer to the beginning of the located substring
 *or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
	h = haystack;
	n = needle;
	while (*haystack && *n && *haystack == *n)
	{
		haystack++;
		n++;
	}
		if (!*n && (*(haystack) == '\0' || *(n - 1) != '\0'))
		return (h);
	haystack = h + 1;
	}

	return (NULL);
}
