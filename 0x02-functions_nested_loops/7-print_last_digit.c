#include "main.h"

/**
 *print_last_digit - prints the last digit of n
 *@n: number to be checked
 *
 *Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;


	if (last_digit < 0);
		last_digit = -last_digit;


	printf ("%d", last_digit);
	return (last_digit);
}
