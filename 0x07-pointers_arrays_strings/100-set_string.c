#include "main.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: Pointer to the pointer to set
 *@to: Value to set the pointer to
 *
 *Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
