#include "lists.h"
/**
 * free_listint2 - freeing the list while head is NULL
 * @head: head, pointer
 * Return: void
 **/
void free_listint2(listint_t **head)
{
	listint_t *free_head = NULL;

	while (*head != NULL)
	{
		free_head = (*head)->next;
		free(*head);
		*head = free_head;
	}
}
