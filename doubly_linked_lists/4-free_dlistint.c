#include "lists.h"
/**
 * free_dlistint - freeing a dlistin list
 * @head: pointer of the head
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	while (head)
	{
		free_list = head->next;
		free(head);
		head = free_list;
	}
}
