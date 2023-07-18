#include "main.h"


/**
*print_alphabet_x10 - prints the alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int i;
	char Letters;


	for (i = 0; i < 10; i++)
	{
		for (Letters = 'a'; Letters <= 'z'; Letters++)
		{
			_putchar(Letters);
		}
		_putchar('\n');
	}
}
