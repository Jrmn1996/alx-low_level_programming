#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: parameter to be checked
 * Return: always 0
 */
void print_diagonal(int n)
{
	int p;
	int sp;

	if (n > 0)
	{
		for (p = 1 ; p <= n ; p++)
		{
			for (sp = 1 ; sp <= p ; sp++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
