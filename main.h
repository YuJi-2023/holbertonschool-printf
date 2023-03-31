#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct type - Struct type which includes a char * and a function pointer
 * @specifier: pointer to conversion specifier
 * @f: pointer to functions for each specifier
 */
typedef struct type
{
	char *specifier;
	int (*f)(va_list args);
} type_t;

int _putchar(char c);
int _printnum_orderly(int i, int j);
int _printchar(va_list args);
int _printstring(va_list args);
int _printsign(va_list args);
int _printnum(va_list args);
int _match_specifier(char c);
int _printf(const char *format, ...);
#endif
