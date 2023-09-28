#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a linked list
 *                     safely, avoiding infinite loops.
 * @head: The head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node, *next_node;
	size_t my_counter = 0;

	if (!head || !head->next)
	{
		return (0);
	}

	current_node = head;
	while (current_node)
	{
		/* Print current node */
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		my_counter++;

		if (current_node > current_node->next)
		{
			current_node = current_node->next;
		}
		else
		{
			next_node = current_node->next;
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
	}
	return (my_counter);
}
