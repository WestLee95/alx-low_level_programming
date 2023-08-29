#include "lists.h"

/**
 *add_node - Adds a new node at the beginning of list_t
 *@head: Pointer to a pointer to the head of the list
 *@str: String to be added in the new node
 *
 *Return: A pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	if (str == NULL)
		return (NULL);

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);
	if (add_node->str == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->len = strlen(str);
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
