#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing all single digit numberz of base 10 starting from 0'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
