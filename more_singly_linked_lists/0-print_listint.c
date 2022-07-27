#include <stdio.h>
#include "lists.h"

/**
 *print_listint - function that print a singly linked list
 *@h : pointer to node head
 *
 *Return: number of elements of the list size_t
 */

size_t print_listint(struct listint_s *h)
{	int coun = 0;
	struct listint_s *next = h;

	while (next != NULL)
	{	printf("%i\n", next->n);
		next = next->next;
		coun++;
	}
	return (coun);
}
