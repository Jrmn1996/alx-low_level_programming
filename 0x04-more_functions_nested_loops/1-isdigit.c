#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: parameter to be chacked
 * Return: 1 if it is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
