#include "lists.h"

/**
 * listint_len - the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
