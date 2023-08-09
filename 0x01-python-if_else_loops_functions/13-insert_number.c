#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_node - inserts numbers into sorted singly-linked list.
 * @head: pointer to the haed of linked list
 * @number: number to insert
 * Return: if function fails - NULL
 * Otherwise - pointer to a new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
