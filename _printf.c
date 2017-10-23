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
 * print_str - prints a string
 * @vl: an argument from a variadic argument list
 *
 * Return: the count of characters
 */
int print_str(va_list vl)
{
	int count;
	char *s = va_arg(vl, char *);
	int i;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
		count++;
	}
	return (count);
}

/**
 * null_case - deals with instances where function pointer points to null
 * @ch: the char being passed
 *
 * Return: a count
 */
int null_case(char ch)
{
	if (ch == '%')
	{
		write(1, &ch, 1);
		return (1);
	}
	else if (ch == ' ')
	{
		write(1, &ch, 1);
		return (1);
	}
	return (0);
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

	/* initialize variadic list */
	va_start(vl, format);

	/* loop through the format string */
	count = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			f = func_pick(format[i]);
			if (f == NULL)
				count += null_case(format[i]);
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

	/* cleanup */
	va_end(vl);

	/* return */
	return (count);
}
