#include "variadic_functions.h"
/**
 * print_strings - printing strings
 * @separator: separator
 * @n: num
 * Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *poi;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		poi = va_arg(arg, char *);
		if (poi == NULL)
			printf("(nil)");
		else
			printf("%s", poi);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
