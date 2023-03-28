#include "main.h"
/**
 * rev_string - reverses string
 * @s: string parameter
 * Return: always 0
 */
void rev_string(char *s)
{
	int l;
	int i;
	char tmp;

	for (l = 0; s[l] != '\0'; ++l)
	{
		;
	}
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
