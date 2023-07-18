#include "main.h"


/**
 * islower - checks for lowercase letter
 *@letter: the character to check

 * return: returns 1 if letter is lowercase, 0 if otherwise
 */
int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
