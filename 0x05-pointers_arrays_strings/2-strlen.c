#include "main.h"


/**
 *_strlen - Checks the length of a string
 *@str: String to be checked
 *
 *retunr: Returns length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
