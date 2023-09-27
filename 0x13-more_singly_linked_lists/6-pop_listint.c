#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * This function removes the first node (the head)
 * from the linked list,frees the memory allocated for it,
 * and returns the data of the deleted node.
 *
 * Return: The data of the deleted node (integer).
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int content;

	/* Check if the list is empty. */
	if (*head == NULL)
		return (0);

	/* Store a reference to the head node in 'popped'. */
	pop = *head;

	/* Get the data from the head node. */
	content = pop->n;

	/* Move the head pointer to the next node. */
	*head = (*head)->next;

	/* Free the memory of the deleted node. */
	free(pop);

	/* Return the data of the deleted node. */
	return (content);
}
