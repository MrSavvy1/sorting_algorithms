#include "sort.h"

/**
 * lomu_swap - swaps two elements in an array
 * @m: first element to be swaped
 * @n: second element to be swapped
 *
 * Return: void
 */

void lomu_swap(int *m, int *n, int *array, size_t size)
{
	if (*m != *n)
	{
		int temp = *m;
		*m = *n;
		*n = temp;
		print_array(array, size);
	}
}

/**
 * lomu_partition - lomuto partition and returns the pivot index
 * @array: the array index
 * @down: low
 * @up: high
 *
 * Return: the pivot index
 */

int lomu_partition(int *array, int down, int up)
{
	int pivot = array[up];
	int i = down - 1;
	int j;

	for (j = down; j <= up - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			lomu_swap(&array[i], &array[j], array, size);
		}
	}
	lomu_swap(&array[i + 1], &array[up], array, size);
	return (i + 1);
}

/**
 * quick_sort_recusive - implements quick sort using
 * Lomuto partition scheme
 * @array: --
 * @down: --
 * @up: --
 *
 * Return: void
 */

void quick_sort_recursive(int *array, int down, int up)
{
	if (down < up)
	{
		int pivot_index = lomu_partition(array, down, up, size);
/**
 * 		printf("\n");
 * 		print_array(array, up + 1);
 */
		quick_sort_recursive(array, down, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, up, size);
	}
}

/**
 * quick_sort - wrapper function for quick sort
 * @array: array of int
 * @size: array size
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
