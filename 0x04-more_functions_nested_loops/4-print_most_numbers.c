#include "main.h"
/**
 * print_most_numbers - prints all numbers from 0 to 9 but 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48 ; a <= 57 ; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
