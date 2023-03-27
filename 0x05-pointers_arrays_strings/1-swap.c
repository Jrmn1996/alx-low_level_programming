#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int tm;

	tm = *a;
	*a = *b;
	*b = tm;
}
