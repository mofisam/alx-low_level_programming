#include "lists.h"

/**
 * print_listint_safe - function prints all the elements of a linked list
 * @head: head of the list
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *vet;
	size_t my_count = 0;

	if (!head || !head->next)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		my_count++;
		
		/* Breaks the loop if next pointer points to previous node */
		if (current > current->next)
		{
			current = current->next;
		}
		else
		{
			vet = current->next;
			printf("-> [%p] %d\n", (void *)vet, vet->n);
			break;
		}
	}
	return (my_count);
}
