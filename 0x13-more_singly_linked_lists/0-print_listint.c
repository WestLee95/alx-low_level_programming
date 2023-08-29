#include "lists.h"

/**
 * print_listint - prints the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int num;
	int digit;

	while (h)
	{
		num = h->n;
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}
		digit = num % 10;
		num /= 10;
		if (num > 0)
		{
			while (num > 0)
			{
				digit = digit * 10 + num % 10;
				num /= 10;
			}
			while (digit >= 10)
			{
				putchar(digit / 10 + '0');
				digit %= 10;
			}
		}
		putchar(digit + '0');
		putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
