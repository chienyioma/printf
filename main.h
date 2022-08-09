#ifndef MAIN_H

#define MAIN_H

#include <stdlib.h>

#include <stdarg.h>

/**
 * struct flags - struct containing flags to turn on
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function
 * @c: format specifier passed to _print()
 * @f: point to the correct print function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
