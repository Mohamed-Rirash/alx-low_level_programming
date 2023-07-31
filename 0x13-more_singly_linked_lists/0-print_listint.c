#include "lists.h"

/**
 * print_listint - print all elements in a list
 * @h: pointer to a linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	for ( ; h != NULL; h = h->next)
		printf("%i\n", h->n), n++;
	return (n);
}

