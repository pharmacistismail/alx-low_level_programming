#include "lists.h"

/**
 * free_listint_safe - frees  linked list
 * @h: pointer to first node in linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int differ;
	listint_t *temp;
	
	if (!h || !*h)
		return (0);
	while (*h)
	{
		differ = *h - (*h)->next;
		if (differ > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	
	*h = NULL;

	return (len);
}
