#include "sort.h"

/**
 * swap: swaps two elements in an array
 * @k: element
 * @l: element
 */
void swap(int *k, int *l)
{
	int temp = *k;
	*k = *l;
	*l = temp;
}

/**
 * selection_sort - sorts an array of integers using selection sort in ascending order
 * @array: array to be sorted
 * @size: size of element
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, m, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array [min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			for (m = 0; m < size; m++)
			{
				printf("%d ", array[m]);
			}
			printf("\n");
		}
	}
}
