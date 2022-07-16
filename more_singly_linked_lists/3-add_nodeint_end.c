#include "lists.h"
/**
 * add_nodeint_end - a new node at the end of the lists
 * @head: head, pointer
 * @n: int
 * Return: address of the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL, *last_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		printf("Error\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
