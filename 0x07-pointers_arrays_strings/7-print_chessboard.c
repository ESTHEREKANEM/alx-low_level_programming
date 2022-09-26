#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer to print
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(*(*(j + a) + k));
		}
		_putchar('\n');
	}
}
