#include "variadic_functions.h"
/**
 * print_all - printing all
 * @format: list of types of arguments passed to the function
 * Return: void
 **/
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *arg_s;

	va_start(arg, format);
	while (*(format + i) != '\0' && (format))
	{
		switch (*(format + i))
		{
			case 's':
				arg_s = va_arg(arg, char *);
				if (arg_s == NULL)
				{
					printf("%s", arg_s);
					break;
					case 'i':
					printf("%d", va_arg(arg, int));
					break;
					case 'f':
					printf("%f", (float) va_arg(arg, double));
					break;
					case 'c':
					printf("%c", (char) va_arg(arg, int));
					break;
					default:
					i++;
					continue;
				}
				if (*(format + i + 1) != '\0')
					printf(", ");
				i++;
		}
	}
	printf("\n");
	va_end(arg);
}
