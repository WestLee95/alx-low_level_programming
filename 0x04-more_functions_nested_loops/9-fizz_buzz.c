#include <stdio.h>


/**
 *main - Prints FizzBuzz pattern from 0 to 100
 *for multiples of 3 Fizz, of 5 Buzz and of 15 FizzBuzz

 *return: returns 0 if successful
 */
int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
