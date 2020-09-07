#include "lists.h"

/**
 * dlistint_len - function
 * @h: parameter
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
