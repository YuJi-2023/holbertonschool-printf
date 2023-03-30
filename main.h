#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct type {
	char *specifier;
	int(*f)(va_list args);
} type_t;

int _putchar(char c);
int _printchar(va_list args);
int _printstring(va_list args);
int _printsign(va_list args);
int _match_specifier (char c);
int _printf(const char *format, ...);
#endif
