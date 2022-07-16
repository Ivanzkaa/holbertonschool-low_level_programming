#include "lists.h"
/**
 * free_listint - freeing a list
 * @head: head, pointer
 * Return: void
 **/
void free_listint(listint_t *head)
{
	listint_t *free_head = NULL;

	while (free_head != NULL)
	{
		free_head = head;
		head = head->next;
		free(free_head);
	}
}
