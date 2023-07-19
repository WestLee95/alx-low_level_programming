#include "main.h"


/**
 *_abs - this computes the absolute value of an integer
 *@n: the integer to be checked
 *
 *Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
