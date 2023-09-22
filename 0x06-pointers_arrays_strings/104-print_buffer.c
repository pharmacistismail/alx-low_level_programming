#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int p, k, m;

	p = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		k = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (m = 0; m < 10; m++)
		{
			if (m < k)
				printf("%02x", *(b + p + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < k; m++)
		{
			int c = *(b + p + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		p += 10;
	}
}
