#include "sort.h"
/**
 * counting_sort -  is an algorithm for sorting a collection of objects
 * according to keys that are small integers.
 * @array: Array of number to sort.
 * @size: Size of the array.
 *
 * Return: Void function ( Nothing).
 */
void counting_sort(int *array, size_t size)
{
	int output[100], count[100], i;
	int max = array[0];

	for (i = 1; i < (int)size; i++)
	{
		if (array[i] > max)
		max = array[i];
	}

	for (i = 0; i <= max; ++i)
		count[i] = 0;

	for (i = 0; i < (int)size; i++)
		count[array[i]]++;

	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];

	for (i = size - 1; i >= 0; i--)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
	print_array(count, max + 1);

	for (i = 0; i < (int)size; i++)
		array[i] = output[i];
}
