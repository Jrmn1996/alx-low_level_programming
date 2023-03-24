#include "main.h"
/**
 * print_triangle - prints triangles
 * @size: parameter to be checked
 * Return: always 0
 */
void print_triangle(int size)
{
	int h;
	int b;

	if (size > 0)
	{
		for (h = 1 ; h <= size ; h++)
		{
			for (b = 1 ; b <= size ; b++)
			{
				if ((h + b) <= size)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
