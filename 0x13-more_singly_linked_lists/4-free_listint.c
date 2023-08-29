#include "lists.h"


/**
 *free_listint - Frees a listint-t list
 *@head: Pointer to head of listint_t
 *
 */
void free_listint(listint_t *head)
{
	listint_t *present, *next;

	present = head;

	while (present != NULL)
	{
		next = present->next;
		free(present);
		present = next;
	}
}
