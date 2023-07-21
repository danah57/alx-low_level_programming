#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separtor: the string seprator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
*/
void print_numbers(const char *separtor, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separtor ? separtor : "") : "\n");
	va_end(ap);
}
