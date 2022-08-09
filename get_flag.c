#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * @s: character that hods the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: 1 if a flag has been turned on, 0 if not
 */

int get_flag(char s, flags_t *f)
{

	int x = 0;

	switch (s)
