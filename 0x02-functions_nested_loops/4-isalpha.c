#include "main.h"


/**
 * _isalpha - checks for alphabet character
 *@alph: the character to be checked
 *
 * Return: Return 1 if alphabet is found, 0 if otherwise
 */
int _isalpha(int alph)
{
    if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
        return (1);
    else
        return (0);
}
