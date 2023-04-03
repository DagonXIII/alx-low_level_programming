#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to head node
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    if (*head == NULL)
        return (0);

    temp = *head;
    data = temp->n;
    *head = (*head)->next;
    free(temp);

    return (data);
}
