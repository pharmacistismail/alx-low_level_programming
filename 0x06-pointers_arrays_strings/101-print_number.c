#include "main.h"
#include <stdio.h>

/* Declare _putchar with the correct prototype */
int _putchar(char c);

int main() {
    _putchar('\n');
    return 0;
}
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
