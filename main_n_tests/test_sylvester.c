#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	unsigned int ui;
	void *addr;

/*
Author's comment, I want to associate each check with a specific conditition
 */

	/********************
	 * CHARACTERS       *
	 *    LITERALS      *
	 *    AND STRINGS   *
	 ********************/

	/*  literal */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%i %i\n", len, len2);

	/* print characters */
        len = _printf("Character:[%c]\n", 'H');
        len2 = printf("Character:[%c]\n", 'H');
        printf("%i %i\n", len, len2);

        len = _printf("Character:[%c]\n", -50);
        len2 = printf("Character:[%c]\n", -2100);
        printf("%i %i\n", len, len2);

        len = _printf("Character:[%++-- .0c]\n", 'B');
        len2 = printf("Character:[%++-- .0c]\n", 'B');
        printf("%i %i\n", len, len2);

	/* print strings */

	/* literal into a single %s */
        len = _printf("String:[%s]\n", "I am a string !");
        len2 = printf("String:[%s]\n", "I am a string !");
        printf("%i %i\n", len, len2);

	len = _printf("%s is a %s\n", "Jack", "Dog");
	len2 = printf("%s is a %s\n", "Jack", "Dog");
	printf("%i %i\n", len, len2);

	len = _printf("Brian said \"%s\"\n", "Yo, what's up?");
	len2 = printf("Brian said \"%s\"\n", "Yo, what's up?");
	printf("%i %i\n", len, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("%i %i\n", len, len2);

	len = _printf("My string is: %s\n", NULL);
	len2 = printf("My string is: %s\n", NULL);
	printf("%i %i\n", len, len2);

	len = _printf("Weird specifier, %-----.5s\n", "abcdefg!"); /* this only prints 5 chars */
	len2 = printf("Weird specifier, %-----.5s\n", "abcdefg!"); /* if no value, print 0! */
	printf("%i %i\n", len, len2);

	/* weird specifiers */
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%i %i\n", len, len2);

	len = _printf("Percent :[%%c]\n");
	len2 = printf("Percent :[%%c]\n");
	printf("%i %i\n", len, len2);

	len = _printf("Percents:[%%%%]\n");
	len2 = printf("Percents:[%%%%]\n");
	printf("%i %i\n", len, len2);

	len = _printf("hi %\n");
	len2 = printf("hi %\n");
	printf("%i %i\n", len, len2);

	len = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("%i %i\n", len, len2);

	printf("********\n\n");

	/* */
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
