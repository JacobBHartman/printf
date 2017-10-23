#include "holberton.h"

/**
 * print_char - prints a character
 * @vl: an argument from a variadic argument list
 *
 * Return: the count of characters
 */
int print_char(va_list vl)
{
	char c;

	c = va_arg(vl, int);
	write(1, &c, 1);
	return (1);
}

/**
 * _printf - a proto-printf function
 * @format: the format specifier string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	/* declare variables and structures */
	va_list vl;
	int count;
	int i;
	int (*f)(va_list);
	char *error = "(nil)";

	/* initialize variadic list */
	va_start(vl, format);

	/* loop through the format string */
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			f = func_pick(format[i]);
			if (f == NULL)
				write(1, &error, 5);
			else
				count += f(vl);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	/* account for null byte at end of string */
	count--;

	/* cleanup */
	va_end(vl);

	/* return */
	return (count);
}
