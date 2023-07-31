#include "lists.h"

/**
 * free_listint - free memory held by a linked list
 * @head: pointer to the head of a linked list
 *
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *i, *h = head;

	for ( ; h != NULL; h = i)
		i = h->next, free(h);
	free(i);
}

