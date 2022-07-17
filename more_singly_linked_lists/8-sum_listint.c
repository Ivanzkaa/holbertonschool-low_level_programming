#include "lists.h"
/**
 * sum_listint - the sum of all the data
 * @head: head, pointer
 * Return: the sum of all the data
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
