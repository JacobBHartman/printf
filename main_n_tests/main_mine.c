#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	/* chars and strings */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%i %i\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("%i %i\n", len, len2);
        len = _printf("String:[%s]\n", "I am a string !");
        len2 = printf("String:[%s]\n", "I am a string !");
	printf("%i %i\n", len, len2);

	/* 3 or more total parameters */
	len = _printf("%s is a %s\n", "Jack", "Dog");
	len2 = printf("%s is a %s\n", "Jack", "Dog");
	printf("%i %i\n", len, len2);

	/* % then null byte */
	len = _printf("hi %\n");
        len2 = printf("hi %\n");
        printf("%i %i\n", len, len2);

	/* task 0 checks: double percent signs and spaces */
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("%i %i\n", len, len2);
        len = _printf("Percent :[%%c]\n");
	len2 = printf("Percent :[%%c]\n");
        printf("%i %i\n", len, len2);
        len = _printf("Percents:[%%%%]\n");
        len2 = printf("Percents:[%%%%]\n");
        printf("%i %i\n", len, len2);

	printf("Hello %s\n", "world");

	return (0);
}
