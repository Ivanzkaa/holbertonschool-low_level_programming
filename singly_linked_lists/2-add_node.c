#include "lists.h"
/**
 * add_node - adding a node at the beginning of a list_t
 * @head: head pointer
 * @str: string
 * Return: the address of the new element
 **/
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;

	new_node->next = (*head);

	(*head) = new_node;

	return (*head);
}
