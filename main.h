#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct sp
{
char *sp;
int (*f)(va_list);
} sp_t;

int _printf(const char *format, ...);
char itoa_generic(char *u8ptrbuf, double u32int_value);
int decToBinary(unsigned int n, char *binaryNum);
int putprin(char *t, long double dig, char fly, char *ss);
int print_string(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int (*get_sp_func(char s))(va_list);
int print_reverse(va_list args);
int print_rot13(va_list args);
#endif
