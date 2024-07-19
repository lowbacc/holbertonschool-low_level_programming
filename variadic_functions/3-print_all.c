#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Entry point
 * @args: arguments
 */
void print_char(va_list args) { printf("%c", va_arg(args, int)); }

/**
 * print_int - Entry point
 * @args: arguments
 */
void print_int(va_list args) { printf("%d", va_arg(args, int)); }

/**
 * print_float - Entry point
 * @args: arguments
 */
void print_float(va_list args) { printf("%f", va_arg(args, double)); }

/**
 * print_string - Entry point
 * @args: arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	printf("%s", str ? str : "(nil)");
}

/**
 * print_all - Entry point
 * @format: list
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";

	fmt_t fmts[] = {
	{'c', print_char}, {'i', print_int},
	{'f', print_float}, {'s', print_string}, {'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (fmts[j].type)
		{
			if (format[i] == fmts[j].type)
			{
				printf("%s", sep);
				fmts[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
