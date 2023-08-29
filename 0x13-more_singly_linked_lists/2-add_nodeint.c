#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning of listint_t
 *@head: Pointer to a pointer to the head of the list
 *@str: String to be added in the new node
 *
 *Return: A pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	{
		free(add_node);
		return (NULL);
	}
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
