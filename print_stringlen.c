#include "main.h"
/**
 * string_length - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int string_length(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * string_lenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int string_lenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
