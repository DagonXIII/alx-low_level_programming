#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 * Rturn: Null in case of error
 */
void free_listint(listint_t *head)
{
	listint_t *freeit;

	while (head != NULL)
	{
		freeit = head;
		head = head->next;
		free(freeit);
	}
}
