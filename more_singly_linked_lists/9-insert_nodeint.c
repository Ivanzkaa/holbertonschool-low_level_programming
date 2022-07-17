#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: head, pointer
 * @n: int
 * Return: The address of the new element or NULL
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = NULL;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);

	new_head->n = n;

	if (!head && !*head)
	{
		new_head->next = NULL;
		*head = new_head;
		return (new_head);
	}

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}


#include "lists.h"
/**
 * insert_nodeint_at_index - inserting a new node
 * @head: head, pointer
 * @idx: index
 * @n: int
 * Return: the address of the new code or NULL
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *next = NULL, *data_holder = NULL;
	unsigned int i = 0;

	if (!head)
		return (0);

	if (idx == 0)
		return (add_nodeint(head, n));
	else if (!*head && idx != 0)
		return (0);

	data_holder = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	for (i = 0; i < idx && data_holder; i++)
	{
		if (i != idx - 1)
		{
			data_holder = data_holder->next;
		}
		else
		{
			next = data_holder->next;
			data_holder->next = new_node;
		}
	}

	if (!data_holder)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = next;

	return (new_node);
}
