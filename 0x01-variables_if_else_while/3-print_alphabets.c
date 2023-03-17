#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing lowercase and uppercase alphabet'
 * Return: Always 0 (success)
 */
int main(void)
{
	int l = 97;
	int U = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	while (U <= 90)
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
