#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) in a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: Sum of all nodes data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
