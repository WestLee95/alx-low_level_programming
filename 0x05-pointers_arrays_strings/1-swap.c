#include "main.h"


/**
 * swap_int - swaps the value of 2 integers
 *@a: Integer to be swapped with b
 *@b: Integer to be swapped with a
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
