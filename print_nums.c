#include "main.h"

/**
 * print_int - prints an integer
 * @l: va_list of arguments
 * @f: pointer to tthe struct flags
 * Return: number of char printed
 */

int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);

	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments
 * @f: pointer to the struct flags
 * Return: number of char printed
 */

int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;

	return (_puts(str));
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
