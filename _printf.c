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
 * func_pick - chooses the appropriate function to print out various data types
 * @s: the character that determines which print function to use
 *
 * Return: a pointer to a function that takes a va_list and returns an int
 */
int (*func_pick(char *s))(va_list)
{
        rela_t relate[] = {
                {"c", print_char},
                {NULL, NULL}
        };
        int i;

        i = 0;
        while (relate[i].ch != NULL)
        {
                if ((relate[i].ch)[0] == *(s + 0))
                        return (relate[i].f);
                i++;
        }
        return (relate[i].f);
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
	char *ptr;

	/* initialize variadic list */
	va_start(vl, format);

	/*  */
	count = 0;
	i = 0;
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			i++;
			ptr = &format[i];
			f = func_pick(ptr);
			if (f == NULL)
			{
				/* do something */;
			}
			count += f(vl);
		}
		else
		{
			putchar(*(format + i));
			count++;
		}
		i++;
	}

	/* cleanup */
	va_end(vl);

	/* return */
	return (count);
}
