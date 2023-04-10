#include "main.h"
/**
 * _islower - checks for lower case
 * @c: to be printed
 * Return: 1 if lower case else 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
