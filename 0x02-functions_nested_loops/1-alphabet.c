#include <unistd.h>


/**
 * print_alphabet - Prints the alphabet in lowercase
 * return: 0
 */
void print_alphabet(void)
{
	char letters = 'a';


	while ( letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar("\n");
}
