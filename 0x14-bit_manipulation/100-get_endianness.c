#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if endian is big, 1 if small
 */
int get_endianness(void)
{
	unsigned int i = 1;

	return (*(char *)&i);
}
