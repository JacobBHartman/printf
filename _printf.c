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
	char *error = "(null)";

	count = 0;
	if (s == NULL)
		for (i = 0; error[i] != '\0'; i++)
		{
			write(1, &error[i], 1);
			count++;
		}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
			count++;
		}
	}
	return (count);
}

/**
 * print_number - prints an integer
 * @vl: number to be printed
 *
 * Return: void
 */
int print_number(va_list vl)
{
	int magnitude;
	unsigned int nu;
	int n;
	int i;

	i = 0;
	n = va_arg(vl, int);
	magnitude = 1;
	if (n < 0)
	{
		putchar('-');
		nu = n * -1;
		i++;
	}
	else
	{
		nu = n * 1;
	}
	while ((nu / magnitude) >= 10)
	{
		magnitude *= 10;
	}
	while (magnitude > 0)
	{
		putchar('0' + ((nu / magnitude) % 10));
		magnitude /= 10;
		i++;
	}
	return (i);
}

/**
 * null_case - deals with instances where function pointer points to null
 * @ch: the char being passed
 *
 * Return: a count
 */
int null_case(char ch)
{
	char aft_pct  = '%';

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
	else if (ch == '\n')
	{
		write(1, &aft_pct, 1);
		write(1, &ch, 1);
		return (2);
	}
	else
	{
		write(1, &aft_pct, 1);
		write(1, &ch, 1);
		return (2);
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
	if (format == NULL)
		return (-1);
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
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	/* cleanup then return */
	va_end(vl);
	return (count);
}
