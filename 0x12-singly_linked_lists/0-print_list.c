#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: ptr to list_t
 * Return: nodes printed (success)
 */
size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		q++;
	}

	return (q);
}
