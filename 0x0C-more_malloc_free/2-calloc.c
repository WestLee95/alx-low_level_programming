#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each,
 *           and initializes all bytes to zero.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0
 *         or if the memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
