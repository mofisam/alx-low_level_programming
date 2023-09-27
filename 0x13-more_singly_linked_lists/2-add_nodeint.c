#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list.
 * @head: This is my struct
 * @n: This is the entry point
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	/* Allocate memory for the new node. */
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
	{
		/* Allocation failed, return NULL.*/
		return (NULL);
	}

	/* Initialize the new node's data and next pointer. */
	n_node->n = n;
	n_node->next = *head;

	/* Update the head pointer to point to the new node. */
	*head = n_node;

	return (n_node);
}
