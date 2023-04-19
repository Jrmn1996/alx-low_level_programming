#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 *parameter on each element of an array
 * @array: integer array
 * @size: array size
 * @action: function pointer
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i = array + size - 1;

	if (array && action && size)
	{
		while (array <= i)
		{
			action(*array++);
		}
	}
}
