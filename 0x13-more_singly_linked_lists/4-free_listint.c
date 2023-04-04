#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *freeit;

	while (head != NULL)
	{
		freeit = head->freeit;
		free(head);
		head = freeit;
	}
}
