#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: Pointer to pointer of the first node in the linked list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeed, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	/*Checks if the list is empty */
	if (!(*head))
		return (-1);

	/*Delete the head node if index is 0 */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/*Traverse the list to the node just before the specified index */
	current = *head;
	for (i = 0; i < (index - 1); i++)
	{
		/*Checks if index is out of range */
		if (!current->next)
			return (-1);
		current = current->next;
	}

	/* Delete the node at the specified index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
