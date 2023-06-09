#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if false , 1 if true
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			a = (int)*s1 - (int)*s2;
			break;
		}
		s1++;
		s2++;
	}
	return (a);
}
