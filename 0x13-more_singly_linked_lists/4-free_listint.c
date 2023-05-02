#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - the name kind of says it all here too
 * @head: as the name suggests
 * Return: it retuns null if there is a mistake
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
