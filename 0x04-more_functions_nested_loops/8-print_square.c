#include "main.h"
/**
 * print_square - prints a square
 * @size: parameter to be checked
 * Return: always 0
 */
void print_square(int size)
{
	int row;
	int col;

	for (row = 1 ; row <= size ; row++)
	{
		for (col = 1 ; col <= size ; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
