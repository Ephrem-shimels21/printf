#include "main.h"
#include <stdio.h>

/**
 * _printf - function for the printf
 * @format: the format for type specifiers
 * Return: integer  number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list var;
	int i = 0;

	va_start(var, format);

	while format[i] != '\0'
	{

		putchar(va_arg(var, char));
		i++;
	}
}
