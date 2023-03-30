#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	for (i = 0; j = (n - 1); i < j; i++; j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
