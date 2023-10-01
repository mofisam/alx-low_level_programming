#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data in a linked list.
 * @head: Pointer to the head of the list.
 *
 * This function iterates through the linked list and calculates
 * the sum of all the integer data stored in the list nodes.
 *
 * Return: The sum of the numbers in the linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	int sum = 0; /*Initialize the sum.*/

	while (cursor != NULL)
	{
		sum += cursor->n; /*Add the current node's data to the sum.*/
		cursor = cursor->next; /*Move to the next node.*/
	}

	return (sum);
}

