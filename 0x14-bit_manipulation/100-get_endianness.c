#include "main.h"
/**
 * get_endianness - returns the endianness of the system
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)&n);
}
