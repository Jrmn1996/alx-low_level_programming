#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: number
 * @index: the bit we want
 * Return: the value of the bit at index index or -1
 *		if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
