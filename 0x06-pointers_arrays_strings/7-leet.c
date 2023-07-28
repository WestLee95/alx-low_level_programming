#include "main.h"


/**
 *leet - encodes a string to 1337
 *@S: The string to encode
 *
 *Return: Char pointer to the encoded string
 */
char *leet(char *S)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "43071";

	for (i = 0; S[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (S[i] == letter[j])
			{
				S[i] = number[j / 2];
			}
		}
	}
	return (S);
}
