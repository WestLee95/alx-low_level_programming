#include "main.h"


/**
 * swap_int - swaps the value of 2 integers
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
