#include "sort.h"

/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @l1: list 1 pointer
 * @l2: list 2 pointer
 *
 * Return: void
 */

void swap_nodes(listint_t *l1, listint_t *l2)
{
	listint_t *temp = l1->prev;

	if (l1 == l2)
	{
		return;
	}

        /* Update previous and next pointers */
        if (l1->prev)
	{
		l1->prev->next = l1;
	}

	if (l2->next)
	{
		l2->next->prev = l2;
	}

	/* Swap prev and next pointers */
	l1->prev = l2->prev;
	l1->prev = temp;

	temp = l1->next;
	l1->next = l2->next;
	l2->next = temp;
}

/**
 * insertion_sort_list - doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * @head:
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *new = (*list)->next;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}

	while (new)
	{
		listint_t *next = new->next;
		listint_t *prev = new->prev;

		while (prev && prev->n > new->n)
		{
			swap_nodes(prev, new);
			if (prev == *list)
			{
				*list = new;
			}
			print_list(*list);
			prev = prev->prev;
		}
		new = next;
	}
}
