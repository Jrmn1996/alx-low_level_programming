#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
