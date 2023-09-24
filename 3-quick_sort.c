#include "sort.h"
/**
 * quick_sort - quick sort function
 * @array: array of integers to sort
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - helper func for quick_sort to incorporate
 * start and end of array
 * @start: start index of array
 * @end: end index of array
 * @array: array
 * @size: size of array
*/

void quick_sort_helper(int *array, int start, int end, size_t size)
{
	if (start < end)
	{
		/*partition the array with the pivot integer*/
		/*which returns partition index*/
		size_t partition_index = partition(array, start, end, size);
		/*now the recursion func which calls itself*/
		/*the base case is if end < start, return*/
		quick_sort_helper(array, start, partition_index - 1, size);
		quick_sort_helper(array, partition_index + 1, end, size);
	}
}

/**
 * partition - partition function following the Lomuto partition scheme
 * @arr: array
 * @alpha: start index of array
 * @omega: end index of array
 * @size: size of array
 * Return: return partition index
*/

int partition(int *arr, int alpha, int omega, size_t size)
{
	int i, partition_index = alpha - 1;
	int pivot = arr[omega];

	for (i = alpha; i < omega; i++)
	{
		if (arr[i] <= pivot)
		{
			partition_index++;
			swap(arr, partition_index, i);
			if (arr[partition_index] != arr[i])
				print_array(arr, size);
		}
	}

	swap(arr, partition_index + 1, omega);
	if (arr[partition_index + 1] != arr[omega])
		print_array(arr, size);
	return (partition_index + 1);
}

/**
 * swap - sort function
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
