#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - the name suggests it too
 * @head: this is a header
 * Return: it returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

