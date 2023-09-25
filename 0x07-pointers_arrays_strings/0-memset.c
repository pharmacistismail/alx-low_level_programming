#include "main.h"

/**
 * _memset - fill block of memory with specific value
 * @s: starting address of memory to be input
 * @w: wanted value
 * @n: number of bytes need to be changed
 *
 * Return: changed array with new value for n bytes
*/

char *_memset(char *s, char w, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = w;
		n--;
	}
	return (s);
}

