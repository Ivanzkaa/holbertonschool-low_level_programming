#include "lists.h"
/**
 * sum_dlistint - the sum of all the data of a dlistint
 * @head: pointr of head
 * Return: the sum of all the data of a dlistint,
 * if the list is empty return 0
**/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
		return (sum);

	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
