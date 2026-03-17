#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *f;
	char *str;
	int first = 1;

	va_start(ap, format);
	f = format;

	while (*f)
	{
		while (*f && *f != 'c' && *f != 'i' && *f != 'f' && *f != 's')
		f++;

		printf("%s", (first == 0) ? ", " : "");
		first = 0;

		switch (*f)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			printf("%s", str ? str : "(nil)");
			break;
		}
		f++;

		while (*f && *f != 'c' && *f != 'i' && *f != 'f' && *f != 's')
			f++;

		if (*f)
			printf (", ");
	}
	va_end(ap);
	printf("\n");
}
