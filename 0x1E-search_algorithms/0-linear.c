#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
*		using the Linear search algorithm
* @array: set of ints in an arr
* @size: size of the arr
* @value: matching value to index if found
* Return: -1 if not found or arr is NULL OR index if found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
