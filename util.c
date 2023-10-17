#include "util.h"

#include <unistd.h>

/*
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/*
 * string_length - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int string_length(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}