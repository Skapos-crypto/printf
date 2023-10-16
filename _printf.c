#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_string}, {"%c", printf_letters},
		{"%%", print_37},
		{"%i", print_integers}, {"%d", print_decimals}, {"%r", print_srev},
		{"%R", print_root13}, {"%b", printf_binarynum}, {"%u", print_unsigned_all},
		{"%o", print_octals}, {"%x", printf_hexlower}, {"%X", printf_HEXUPPER},
		{"%S", printf_bigstring}, {"%p", print_pointers}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
