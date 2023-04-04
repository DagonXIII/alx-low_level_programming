#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - free a `listint_t` list and set the head to null
 * @h: double pointer to head of linked list
 * Description: This function should work for circular lists
 * Only loop through the list once
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *previous_node;
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	current_node = *h;
	while (current_node != NULL)
	{
		count++;
		previous_node = current_node;
		current_node = current_node->next;
		free(previous_node);

		/* Check if the current node has already been visited */
		if (previous_node < current_node)
			break;
	}
	*h = NULL;

	return (count);
}


