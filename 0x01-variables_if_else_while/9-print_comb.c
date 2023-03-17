#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing all possible combinations of single-digit numbers'
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
