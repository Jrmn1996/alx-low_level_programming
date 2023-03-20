#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing all possible different combonations of two digits'
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int z;

	for (a = 0; a < 10; a++)
	{
		for (z = 1; z < 10; z++)
		{
			if (a < z && a != z)
			{
				putchar(a + '0');
				putchar(z + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
