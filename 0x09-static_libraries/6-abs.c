#include "main.h"
/**
 * _abs - computes absolute value
 * @n: to be checked
 * Return: always n
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
