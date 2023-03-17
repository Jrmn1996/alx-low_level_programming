#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing all the numbers of base 16 in lowercase'
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 48;
	int y = 97;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
