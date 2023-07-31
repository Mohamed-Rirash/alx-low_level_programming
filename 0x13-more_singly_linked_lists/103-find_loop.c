#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node
 *
 * Return: pointer to the loop or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	if (head == NULL || head->next == NULL)
		return (NULL);
	one = head, two = head;

	one = one->next, two = two->next->next;
	while (two && two->next)
	{
		if (one == two)
			break;
		one = one->next;
		two = two->next->next;
	}
	if (one != two)
		return (NULL);
	one = head;
	while (one != two)
	{
		one = one->next;
		two = two->next;
	}
	return (one);
}

