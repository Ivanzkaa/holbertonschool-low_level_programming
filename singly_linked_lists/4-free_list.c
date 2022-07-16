#include "lists.h"
/**
 * free_list - frees the list
 * @head: pointer to the list
 * Return: void
 **/
void free_list(list_t *head)
{
	list_t *placeholder_head = NULL;

	if (!head)
		return;

	while (head)
	{
		placeholder_head = head;
		if (head->str)
			free(head->str);
		head = head->next;
		free(placeholder_head);
	}
}
