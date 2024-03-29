#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	struct listint_s *prev;
	struct listint_s *next;
	const int n;
} listint_t;

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Helper functions */
void swap(int *k, int *l);
void swap_nodes(listint_t **list, listint_t *list1, listint_t *list2);
void lomu_swap(int *m, int *n, int *array, size_t size);
int lomu_partition(int *array, int down, int up, size_t size);
void quick_sort_recursive(int *array, int down, int up, size_t size);

#endif  /* SORT_H */
