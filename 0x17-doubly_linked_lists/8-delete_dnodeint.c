#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at
 * a given position in a doubly linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		prev_node = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	prev_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev_node;
	free(current);

	return (1);
}
