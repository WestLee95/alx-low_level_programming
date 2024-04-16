#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Number to search
 * @index: The index, starting from 0
 * of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1ul << index);

	return (1);
}