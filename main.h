#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int print_pointers(va_list val);
int print_hex_aux(unsigned long int num);
int printf_HEXDECIMALS(unsigned int num);
int printf_bigstring(va_list val);
int printf_HEXUPPER(va_list val);
int printf_hexlower(va_list val);
int print_octals(va_list val);
int print_unsigned_all(va_list args);
int printf_binarynum(va_list val);
int print_srev(va_list args);
int print_root13(va_list args);
int print_integers(va_list args);
int print_decimals(va_list args);
int string_length(char *s);
int *_strcpy(char *dest, char *src);
int string_lenc(const char *s);
int rev_string(char *s);
int string_lenc(const char *s);
int print_37(void);
int printf_letters(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
