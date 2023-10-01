#include "lists.h"

/**
 * find_listint_loop - Locates a loop in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop begins,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *end = head;

	/* Check if the list is NULL or contains only one element */
	if (head == NULL || head->next == NULL)
		return (NULL);

	/*
	 * Traverse the list with start and end pointers,
	 * Until start and end pointers meet, or reaches the end
	 */
	while (end != NULL && end->next != NULL)
	{
		start = start->next;
		end = end->next->next;

		if (start == end)
		{
			/* If equal, there's a loop */
			start = head;
			while (start != end)
			{
				/* Keep checking next pointer until they meet */
				start = start->next;
				end = end->next;
			}
			return (start); /* Return the starting node of the loop */
		}
	}

	/* Returns NULL if no loop */
	return (NULL);
}
