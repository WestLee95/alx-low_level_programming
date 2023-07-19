#include "main.h"


/**
 * test_isalpha - test the isalpha function
 *
 * @alph: Number to pass to _isalpha function
 */
void test_isalpha(int alph)
{
    int r;

    r = _isalpha(alph);
    _putchar(r + '0');
    _putchar('\n');
}

/**
 * main - check the code for Holberton School students. 
 *
 * Return: Always 0.
 */
int main(void)
{
		test_isalpha('H');
			return (0);
}
