#include "main.h"


/**
 * a function that sets the value of a pointer to a char.
 *set_string - sets the value of a pointer to a char.
 *@s: pointer to a pointer
 *@to: pointer char
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
