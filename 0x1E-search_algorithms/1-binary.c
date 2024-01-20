#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 * @array: array of integer values
 * @size: size of the arr
 * @value: to find matching element
 * Return: -1 if value not present or arr is NULL OR index if found
 */
int binary_search(int *array, size_t size, int value)
{
	int search;

	search = bs_helper(array, value, -1, size);
	if (search)
		return (search);
	return (-1);
}
/**
 * bs_helper - splits arr recursively in halves until matching element found
 * @array: arr of int values
 * @key: key to match array element
 * @lower: subarr before mid
 * @higher: subarr after mid
 * Return: -1 if value not present or arr is NULL OR index if found
 */
int bs_helper(int *array, int key, int lower, int higher)
{
	int i;
	int mid;

	if (lower + 1 == higher)
		return (-1);
	printf("Searching in array: ");
	for (i = lower + 1; i < higher; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < higher)
			printf(", ");
	}
	printf("\n");
	mid = (lower + higher) / 2;
	if (array[mid] == key)
		return (mid);
	if (key < array[mid])
		return (bs_helper(array, key, lower, mid));
	else
		return (bs_helper(array, key, mid, higher));
}
