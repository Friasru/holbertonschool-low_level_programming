#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
