#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev
	listint_t *current;
	unsigned int i;

	if (*head == NULL) /* empty list */
		return (-1);

	if (index == 0) /* delete the first node */
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = prev->next;
	for (i = 1; current != NULL; i++)
	{
		if (i == index) /* delete current node */
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
	}

	return (-1); /* index out of range */
}
