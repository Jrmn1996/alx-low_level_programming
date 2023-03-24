#include "main.h"
/**
 * print_line - draws a straight line
 * @n: parameter to be checked
 * Return: always 0
 */
void print_line(int n)
{
	int us;

	if (n > 0)
	{
		for (us = 1 ; us <= n ; us++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
