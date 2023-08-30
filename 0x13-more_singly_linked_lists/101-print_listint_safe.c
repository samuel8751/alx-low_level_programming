#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_start = NULL;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		count++;

		if (current->next >= loop_start)
		{
			loop_start = current;
			current = current->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
	}
	return (count);
}

