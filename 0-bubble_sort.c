#include "sort.h"
/**
 * bubble_sort - sort array elements from min to max value
 * @array: ptr to the given array
 * @size: size of the given array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1 ; i++)
		for (index = 0; index < size  - 1 - i ; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
			}
		}
}
