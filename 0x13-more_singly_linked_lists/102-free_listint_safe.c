#include "lists.h"
#include <stdio.h>

/**
 * _find_loop - finds the loop in a linked list
 * @head: pointer to the head node
 *
 * Return: pointer to the loop or NULL if no loop
 */
listint_t *_find_loop(listint_t *head)
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

/**
 * free_listint_safe - free linked lists with a loop safely
 * @head: head node of linked list
 *
 * Description: The list should be circled once, set head to NULL
 * Return: integer, number of nodes free'd
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *hold, *current;
	size_t count, repeat;

	if (*head == NULL)
		return (0);

	hold = _find_loop(*head), count = 0, repeat = 0;

	while (*head != NULL)
	{
		if (hold != NULL && hold == *head)
			repeat += 1;

		if (repeat == 2)
			break;
		current = *head, *head = current->next;
		free(current), count += 1;
	}
	*head = NULL;
	return (count);
}

