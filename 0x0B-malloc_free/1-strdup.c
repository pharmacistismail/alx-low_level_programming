#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int k, t = 0;
	
	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	
	aaa = malloc(sizeof(char) * (k + 1));
	
	if (aaa == NULL)
		return (NULL);
	
	for (t = 0; str[t]; t++)
		aaa[t] = str[t];
	
	return (aaa);
}
