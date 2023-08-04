#include "main.h"
/**
 * flip_bits - determines the number of bits you would need to
 *		flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int cnt = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			cnt++;
		xorval = xorval >> 1;
	}
	return (cnt);
}
