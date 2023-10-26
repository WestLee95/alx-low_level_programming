#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: Converted number, or 0 if
 * there is one or more chars in the
 * string that is not 0 or 1,
 * or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, base_two, uin = 0;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;

	len--;
	base_two = 1;
	while (len > 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			uin += base_two;

		base_two *= 2;
		len--;
	}

	return (uin);

}
