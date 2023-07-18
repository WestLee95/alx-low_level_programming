#include "main.h"


/**
 * isalpha - checks for alphabet character
 * @alph: the character to check
 *
 * return: return 1 if character found, 0 if otherwise
 */
int isalpha(int alph)
{
	if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
