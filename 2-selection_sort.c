#include "sort.h"

/**
 * selection_sort - seletion valu in array
 * @array: Array to be sorted
 * @size: Size of array given
 * Descrtiption: Function that sorts an array using the Selection
 * sort algotrithm
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, *min_in, tmp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_in = array + i;
		for (j = i + 1; j < size; j++)
				min_in = (array[j] < *min_in) ? (array + j) : min_in;

		if (i != min_in)
		{
			tmp = array[i];
			array[i] = *min_in;
			*min_in = tmp;
			print_array(array, size);
		}
	}
}

