#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array to be sorted.
 * @size: size of items in the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	size_t j;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		 print_array(array, size);
	}
}
