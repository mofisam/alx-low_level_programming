#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the
 * beginning of a listint_t list.
 * @head: This is my struct
 * @n: This is the entry point
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node. */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		/* Allocation failed, return NULL.*/
		return (NULL);
	}

	/* Initialize the new node's data and next pointer. */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer to point to the new node. */
	*head = new_node;

	return (new_node);
}
