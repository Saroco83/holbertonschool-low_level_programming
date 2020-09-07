#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	while(h)
	{
		nodes = nodes + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return(nodes);
}
