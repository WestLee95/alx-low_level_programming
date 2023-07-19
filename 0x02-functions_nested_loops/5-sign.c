#include "main.h"


/**
 *print_sign - checks the sign of a number
 *@n: number to be checked
 *
 *return: returns 1 if n is positive, 0 if n is 0 and -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
