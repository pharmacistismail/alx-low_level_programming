#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* 
 * the main function to print digit numbers
 *
 *
 * the output always 0
 * */
int main(void)
{
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	for (num=0; num < 10; num++)
		printf("%d", num);

	printf("\n");


	return (0);
}
