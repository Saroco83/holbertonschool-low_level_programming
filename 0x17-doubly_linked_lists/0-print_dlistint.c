#include "lists.h"
/**
 * print_dlistint - check the code for Holberton School students.
 * @h: argument input
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes = nodes + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
