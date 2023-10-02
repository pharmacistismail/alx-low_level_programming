#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program
 * @argc: number of arguments in program
 * @argv: array of arguments in program
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
