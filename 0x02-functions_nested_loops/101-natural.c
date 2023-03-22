#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing the sum of all the multiples of 3 or 5 below 1024'
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b = 0;

	for (a = 0 ; a < 1024 ; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b = b + a;
		}
	}
	printf("The sum of all the multiples of 3 or 5 below 1024 is :%d\n", b);
	return (0);
}
