#ifndef HEADER_FILE
#define HEADER_FILE

#include<string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list function
 * @n: integer
 * @next: this points to the next node
 * Description: the singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
