#include "lists.h"

/**
 * dlistint_len - mlmlmlm
 * @h: ghhhh
 * Return: ghhh
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
