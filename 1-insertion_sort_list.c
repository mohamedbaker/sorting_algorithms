#include "sort.h"


/**
 * insertion_sort_list - Sorts a doubly linked list of ints
 * Description: by insertion sort algorithm then Prints ls.
 * @list: A pointer to the head of a list of ints.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = next)
	{
		next = current->next;
		previous = current->prev;

		while (previous != NULL && current->n < previous->n)
		{
			swapNodes(list, previous, current);
			print_list((const listint_t *)*list);
			previous = current->prev;
		}
	}
}

/**
 * swapNodes - swaps two nodes in a doubly-linked list
 * @a: first node address
 * @b: second node address
 * @list: ls
 * Return: void
 */
void swapNodes(listint_t **list, listint_t *a, listint_t *b)
{
	a->next = b->next;
	if (b->next != NULL)
		b->next->prev = a;
	b->prev = a->prev;
	b->next = a;
	if (a->prev != NULL)
		a->prev->next = b;
	else
		*list = b;
	a->prev = b;
	a = b->prev;
}
