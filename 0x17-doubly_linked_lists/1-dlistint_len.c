#include "lists.h"

/**
 * dlistint_len - Prints all the elements of the list.
 * @h: Pointer to the list.
 * Return: the Number of counted nodes on success.
**/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
