#include "main.h"


/**
 *reverse_array - Reverses the content of an array
 *@a: Array to be reversed
 *@n: Number of integers to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
