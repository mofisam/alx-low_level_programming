#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a linked list
 *                     safely, avoiding infinite loops.
 * @head: The head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t my_count = 0;
	
	/* Allocate memory for an array of pointers to track visited nodes. */
	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	/* Traverse the linked list and print its elements. */
	while (cursor == 0)
	{
		/* Check if the current node has been visited before. */
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		my_count += 1;
		cursor = cursor->next;
	}
	return (my_count);
}

/**
 * listint_len - function counts the number of nodes in a linked list.
 * @h: Head of the list.
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t my_count = 0;

	while (cursor != NULL)
	{
		my_count += 1;
		cursor = cursor->next;
	}
	return (my_count);
}

/**
 * check_ptr - function checks if a pointer is in an array
 * @ptr: Pointer to be checked.
 * @array: Array to be checked in.
 * @size: Size of the array.
 * Return: 1 on success (found), 0 on fail (not found).
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	/* Loop through the array to check if the pointer is present. */
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
