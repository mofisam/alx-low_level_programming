#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the beginning of a listint_t list.
 * @head: This is my struct
 * @n: This is the entry point
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (n_node == NULL)
	{
		free(n_node);
		return (n_node);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = n_node;
	return (*head);
}
