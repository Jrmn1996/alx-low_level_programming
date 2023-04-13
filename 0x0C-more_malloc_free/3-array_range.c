#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: starting integer
 * @max: max integer
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int length;
	int i;
	int *p;

	if (max < min)
	{
		return (NULL);
	}
	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		p[i] = min++;
	}
	return (p);
}
