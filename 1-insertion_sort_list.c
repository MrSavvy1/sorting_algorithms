#include "sort.h"

/**
 * swap_nodes - swaping the nodes
 * @l1: list 1
 * @l2: list 2
 *
 * Return: void
 */

void swap_nodes(struct listint_s **l1, struct listint_s **l2)
{
	struct listint_s *temp = *l1;
	*l1 = *l2;
        *l2 = temp;

        /* Update previous and next pointers */
        if ((*l1)->prev)
	{
		(*l1)->prev->next = *l1;
	}

	if ((*l2)->next)
	{
		(*l2)->next->prev = *l2;
	}

	/* Swap prev and next pointers (if neccessary) */
	temp = (*l1)->prev;
	(*l1)->prev = (*l2)->prev;
	(*l1)->prev = temp;

	temp = (*l1)->next;
	(*l1)->next = (*l2)->next;
	(*l2)->next = temp;
}

/**
 * insertion_sort_list - doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * @head:
 *
 * Return: void
 */

void insertion_sort_list(struct listint_s **head)
{
	struct listint_s *new = (*head)->next;

	while (new)
	{
		struct listint_s *prev = new->prev;
		while (prev && prev->n > new->n)
		{
			swap_nodes(&prev, &new);
			print_list(*head);
			prev = prev->prev;
		}
		new = new->next;
	}
}
