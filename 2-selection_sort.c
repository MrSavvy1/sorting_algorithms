#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * using selection sort in ascending order
 * @array: array to be sorted
 * @size: size of element
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i, position;
	int temp;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		position = i;
		for (j = 1 + i; j < size; j++)
		{
			if (array[j] < array[position])
				position = j;
		}
		if (position != i)
		{
			temp = array[i];
			array[i] = array[position];
			array[position] = temp;
			print_array(array, size);
		}
	}
}
