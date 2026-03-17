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

		if (*f)
		{
			if (!first)
			printf(", ");
		first = 0;
		}

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
            (void)(str && printf("%s", str) || printf("(nil)"));
            break;
		}
		f++;
	}
	va_end(ap);
	printf("\n");
}
