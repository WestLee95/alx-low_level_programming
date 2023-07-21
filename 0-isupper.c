#include "main.h"


/**
 *is_uppercase - Checks which character is uppercase
 *@c: character to be checked
 *
 * Return: returns 1 if uppercase, 0 if otherwise
 */
int is_uppercase(char c)
{
	if (_isupper (c))
		return (1);
	else
		return (0);
}
