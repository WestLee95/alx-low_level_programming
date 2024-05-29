#include "main.h"


/**
 * string_nconcat - Concatenates two strings up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: Pointer to the newly allocated space in memory containing s1,
 *         followed by the first n bytes of s2, and null terminated.
 *         If the function fails, it should return NULL.
 *         If NULL is passed for any string, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len_s1, len_s2, total_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	total_len = len_s1 + n;

	concat = malloc(total_len + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[len_s1 + j] = s2[j];

	concat[len_s1 + n] = '\0';

	return (concat);
}
