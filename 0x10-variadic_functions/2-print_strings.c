#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of arguments
 * @...: strings to print
 * Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
	{
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)", i ?
				(separator ? separator : "") : "\n");
	}
	va_end(ap);
}
