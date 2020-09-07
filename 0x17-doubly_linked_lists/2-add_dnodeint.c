#include "lists.h"
/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: parameter
 * @n: second parameter
 * Return: new.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = malloc()sizeof(dlistint_t);
	if(new == NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (new == NULL);
		return(NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
