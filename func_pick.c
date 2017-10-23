#include "holberton.h"

/**
 * func_pick - chooses the appropriate function to print out various data types
 * @s: the character that determines which print function to use
 *
 * Return: a pointer to a function that takes a va_list and returns an int
 */
int (*func_pick(char s))(va_list)
{
        rela_t relate[] = {
                {'c', print_char},
                {'\0', NULL}
        };
        int i;

        i = 0;
        while (relate[i].ch != '\0')
        {
                if (relate[i].ch == s)
                        return (relate[i].f);
                i++;
        }
        return (relate[i].f);
}
