#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers i
 * nascending order using the Bubble sort algorithm.
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}

