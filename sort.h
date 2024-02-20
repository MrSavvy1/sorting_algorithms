
#ifndef SORT_H
#define SORT_H

typedef struct listint_s
{
	struct listint_s *prev;
	struct listint_s *next;
	const int n;
} listint_t

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif  /* SORT_H */
