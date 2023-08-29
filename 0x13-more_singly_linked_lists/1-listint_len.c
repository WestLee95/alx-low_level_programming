#include "lists.h"


/**
 *listint_len - Gives number of elements in listint_t
 *@h: Pointer to listint_t
 *
 *Return: Counts number of elements of listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
