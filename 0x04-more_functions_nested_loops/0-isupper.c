#include "main.h"
/**
 * _isupper - checks if c is uppercase
 * @c: parameter to be checked
 * Return: 1 if it it uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
