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
		for (col = 1 ; col <= size ; row++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
