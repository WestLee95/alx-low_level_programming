#include "main.h"


/**
 *print_chessboard - Prints a chessboard in the terminal
 *@a: 2D array representing th chessboard
 *
 *Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char c;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = a[i][j];
			write(1, &c, 1);
		}
		write(1, "\n", 1);
	}
}
