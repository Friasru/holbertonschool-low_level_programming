#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Description: Prints values according to format specifiers:
 * c: char
 * i: integer
 * f: float
 * s: char * (prints (nil) if NULL)
 * Any other character is ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		if (i > 0 && (format[i] == 'c' || format[i] == 'i' 
			|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
