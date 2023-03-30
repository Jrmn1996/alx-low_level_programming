#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: max number of bytes from @src
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
