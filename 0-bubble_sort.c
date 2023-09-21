#include "sort.h"
/**
 * bubble_sort - bubble sort function
 * @array: array of integers
 * @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	if (sizeof(array) <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				k = j + 1;
				swap(array, j, k);
				print_array(array, size);
			}
		}
	}
}

/**
 * sort - sort function
 * @array: array
 * @x: index x
 * @y: index y
*/

void swap(int *array, int x, int y)
{
	int temp;

	temp = array[x];
	array[x] = array[y];
	array[y] = temp;
}
