#include "main.h"

int find_sqrt(int n, int i);
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to find square root of
 *
 *return: the natural square root of n, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 *find_sqrt - finds the natural square root of n
 *@n: number to find square root of
 *@i: iterator
 *
 *return: natural square root of n, otherwise -1
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
