#include "main.h"

/**
 * print_chessboard - Entry point for chessboard
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int o;

	for (x = 0; x < 8; x++)
	{
		for (o = 0; o < 8; o++)
			_putchar(a[x][o]);
		_putchar('\n');
	}
}
