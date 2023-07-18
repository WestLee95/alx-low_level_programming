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

#include "main.h"



/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
		test_isalpha('H');
			return (0);
}
