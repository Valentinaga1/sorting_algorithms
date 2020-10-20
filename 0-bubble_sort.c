#include "sort.h"
/**
 * bubble_sort -  simple sorting algorithm that repeatedly steps through the
 * list, compares adjacent elements and swaps them if they are in the wrong
 * order.
 * @array: Array of number to sort.
 * @size: Size of the array.
 *
 * Return: Void function ( Nothing).
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
