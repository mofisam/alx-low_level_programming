#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: input
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int my_count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		my_count++;
	}
	return (my_count);
}
