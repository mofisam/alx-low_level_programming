#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node, starting at 0.
 *
 * Return: NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declaring i variable as the node */
	unsigned int i;

	/* Go through the list until the specified index or end of list is reached */
	for (i = 0; i < index; i++)
	{
		/* If head node does not exist (end of list), return NULL */
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
