#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("Original String: %s\n", s);
	rev_string(s);
	printf("Reversed String: %s\n", s);
	return (0);
}
