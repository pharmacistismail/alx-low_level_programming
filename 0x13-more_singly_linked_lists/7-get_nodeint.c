#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at  certain index in linked list
 * @head: first node in linked list
 * @index: index of node to be returned
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}

	return (temp ? temp : NULL);
}
