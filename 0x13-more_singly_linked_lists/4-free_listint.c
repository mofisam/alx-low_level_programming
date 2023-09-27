#include "lists.h"
/**
 * free_listint - Function frees a linked list
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		/* Store the current node in a temporary pointer. */
		temp = head;
		/* Move the head pointer to the next node. */
		head = head->next;
		/* Free the memory of the current node. */
		free(temp);
	}
}
