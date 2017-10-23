#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* libraries and header files */
#include <limits.h>
#include <stdio.h>  /* putchar */
#include <stdarg.h> /* variadics */
#include <string.h> /* strcmp */
#include <unistd.h> /* write */

/* structure declarations and typedef here */
typedef struct relations {
	char ch;
	int (*f)(va_list);
} rela_t;

/* function prototypes here */
int _printf(const char *format, ...);
int (*func_pick(char s))(va_list);
int print_char(va_list vl);

#endif /* _HOLBERTON_H_ */
