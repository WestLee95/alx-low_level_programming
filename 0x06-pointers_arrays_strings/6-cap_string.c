#include "main.h"


/**
 *cap_string - Capitalizes all words of a string
 *@L: String to be capitalized
 *
 *Return: Char pointer to capitalized string
 */
char *cap_string(char *L)
{
	int i;
	int Capital = 1;

	while (L[i])
	{
		if (Capital && isalpha(L[i]))
		{
			L[i] = toupper(L[i]);
			Capital = 0;
		}
		else if (L[i] == ' ' || L[i] == '\t' || L[i] == '\n')
		{
			Capital = 1;
		}
		i++;
	}
	return (L);
}
