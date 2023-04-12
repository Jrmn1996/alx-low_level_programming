#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int a1;
	int a2;
	int i;
	char *b;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	a1 = _strlen(s1);
	a2 = _strlen(s2);
	b = malloc((a1 + a2) * sizeof(char) + 1);
	for (i = 0; i <= a1 + a2; i++)
	{
		if (i < a1)
		{
			b[i] = s1[i];
		}
		else
		{
			b[i] = s2[i - a1];
		}
	}
	b[i] = '\0';
	return (b);
}
