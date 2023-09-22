#include "sort.h"
/**
 * selection_sort - selection sorting function
 * @array: array to sort
 * @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, min_index, temp;

	if (size <= 1)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				min_index = j;
			}
		}
		if (min != array[i])
		{
			temp = array[i];
			array[i] = min;
			array[min_index] = temp;
			print_array(array, size);
		}
	}

}
