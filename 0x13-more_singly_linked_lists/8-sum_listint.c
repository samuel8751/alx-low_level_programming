#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) 
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

