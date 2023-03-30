#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting @dest
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int cc;

	c = 0;
	while (dest[c])
	{
		c++;
	}
	for (cc = 0; src[cc]; cc++)
	{
		dest[c] = src[cc];
		c++;
	}
	return (dest);
}
