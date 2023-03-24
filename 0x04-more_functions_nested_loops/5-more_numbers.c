#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: always 0
 */
void more_numbers(void)
{
	int a;
	int row;
	int b;

	for (row = 1 ; row <= 10 ; row++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			a = b;
			if (b > 9)
			{
				_putchar(1 + 48);
				a = b % 10;
			}
			_putchar(a + 48);
		}
		_putchar('\n');
	}
}
