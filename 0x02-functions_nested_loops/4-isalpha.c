#include "main.h"
/**
 * _isalpha - function checks for alphabet
 * @c: is checked
 * Return: 1 if it is an alphabet
 * else return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
