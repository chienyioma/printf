#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the charaters
 * Description: this function is to call the get_print()
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
