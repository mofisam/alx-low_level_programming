#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: Pointer to a list.
 * Return: Integer.
 */
size_t listint_len(const listint_t *h)
{
	size_t my_count;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		my_count += 1;
		h = h->next;
	}
	return (my_count);
}
