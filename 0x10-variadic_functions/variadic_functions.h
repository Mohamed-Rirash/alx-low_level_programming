#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION

#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list p);
void print_integer(va_list p);
void print_float(va_list p);
void print_string(va_list p);
void print_all(const char * const format, ...);

/**
 * actions - data struct
 * @s: pointer to a string
 * @f: function pointer
 */
typedef struct actions
{
	char *s;
	void (*f)(va_list);
} actions;

#endif /* VARIADIC_FUNCTION */

