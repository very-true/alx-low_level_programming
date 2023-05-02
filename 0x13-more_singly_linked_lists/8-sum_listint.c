#include "lists.h"

/**
 * sum_listint - channel it filter it funnel it
 * @head: The Shawshank Redemption
 * Return: this adds everything up
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
