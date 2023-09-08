#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* the code prints 
 * 
 * the alphabet in lowercase,
 *  and then in uppercase
 *
 *  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
