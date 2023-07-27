#include "main.h"


/**
 *string_toupper - Changes letters from lowercase to uppercase
 *@l: String containing letters
 *
 *Return: Returns pointer to the resulting string
 */
char *string_toupper(char *l)
{
	char *w = l;

	while (*w)
	{
		*w = toupper(*w);
		w++;
	}

	return (l);
}
