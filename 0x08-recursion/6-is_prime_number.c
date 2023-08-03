int is_prime_helper(int n, int i);

#include "main.h"


/**
 *is_prime_number - checks if number is a prime number
 *@n: number to check
 *
 *return: returns 1 if the n is prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 *is_prime_helper - checks if a number is prime
 *@n: number to be checked
 *@i: iterator
 *
 *return: 1 if n is prime number, otherwise 0
 */
int is_prime_helper(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
