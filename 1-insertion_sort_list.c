#include "sort.h"

/**
 * swap_nodes - swaps two nodes in a doubly linked list
 * @l1: list 1 pointer
 * @l2: list 2 pointer
 *
 * Return: void
 */

void swap_nodes(listint_t **list, listint_t *l1, listint_t *l2)
{
	if (l1 == NULL || l2 == NULL || l1 == l2)
	{
		return;
	}

	/* Update previous and next pointers */
	if (l1->prev)
	{
		l1->prev->next = l2;
	}
	else
	{
		*list = l2;
	}

	if (l2->next)
	{
		l2->next->prev = l1;
	}

	/* Swap prev and next pointers */
	if (l1->next == l2)
	{
		l1->next = l2->next;
		l2->prev = l1->prev;
		l1->prev = l2;
		l2->next = l1;
	}
	else
	{
		l2->prev = l1->prev;
		l1->prev = l2;
		l2->next = l1->next;
		l1->next = l2;
		if (l2->next)
			l2->next->prev = l1;
		if (l1->prev)
			l1->prev->next = l2;
	}
}

/**
 * insertion_sort_list - doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * @list: pointe to the head of the list
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
	while (new != NULL)
	{
		current = new;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			swap_nodes(list, current->prev, current);
			print_list(*list);
			if (current->prev == NULL)
				break;
		}
		new = new->next;
	}
}
