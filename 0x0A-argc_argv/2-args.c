#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: pointer to string
 * Return: always 0
 */
int main(int argc, char const *argv[])
{
	int a = 0;

	while (argc--)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
