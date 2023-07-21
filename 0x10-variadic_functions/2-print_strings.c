#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: the string seprarator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * REturn: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char 8)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
