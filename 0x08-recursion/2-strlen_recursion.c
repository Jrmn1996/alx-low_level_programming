#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s > '\0')
	{
		l += _strlen_recursion(s + 1) + 1;
	}
	return (l);
}
