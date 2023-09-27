#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: Pointer to pointer of first node in the linked list
 * Return: the first node of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *prev_node = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
