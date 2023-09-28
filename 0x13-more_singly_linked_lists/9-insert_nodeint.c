#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to pointer of the first node in the linked list.
 * @idx: Index of the list where the new node should be added (starting at 0).
 * @n: The value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int i;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* Set the data for the new node */
	new->n = n;

	/* Insert at the beginning of the list (idx is 0) */
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	/* Locate the node before the position for the new node */
	for (i = 0; i < (idx - 1); i++)
	{
		/* Check if current node or next node is NULL before inserting */
		if (current == NULL || current->next == NULL)
		{
			free(new); /* Free the allocated memory if insertion fails */
			return (NULL);
		}
		current = current->next;
	}

	/* Insert the new node between current and the next node */
	new->next = current->next;
	current->next = new;

	return (new);
}

