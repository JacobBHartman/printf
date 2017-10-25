#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* libraries and header files */
#include <limits.h>
#include <stdio.h>  /* putchar */
#include <stdarg.h> /* variadics */
#include <string.h> /* strcmp */
#include <unistd.h> /* write */

/**
 * struct relations - draws a relationship between a frmt spec and a f-ptr
 * @ch: the format specifier
 * @fp: a pointer to a function that takes in a type va_list and returns an int
 *
 * Description: ch will be the primary format specifer (not a flag!)
 */
typedef struct relations
{
	char ch;
	int (*fp)(va_list);
} rela_t;

/* function prototypes here */
int _printf(const char *format, ...);
int (*func_pick(char s))(va_list);
int print_char(va_list vl);
int print_str(va_list vl);
int print_number(va_list vl);
int null_case(char);

#endif /* _HOLBERTON_H_ */
