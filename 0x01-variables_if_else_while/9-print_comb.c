#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing all possible combinations of single-digit numbers'
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n = 48;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
