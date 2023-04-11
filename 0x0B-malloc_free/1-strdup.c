#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return:  pointer to the duplicated string
 *	NULL if str is null or  if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	int s;
	char *a;

	if (str == 0)
	{
		return (0);
	}
	for (s = 0; str[s] != '\0'; s++)
	{
	}
	a = malloc(s * sizeof(*str) + 1);
	if (a == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			a[i] = str[i];
		}
	}
	return (a);
}
