#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int _printf(const char *format, ...);
char itoa_generic(char *u8ptrbuf, double u32int_value);
int decToBinary(int n, char *binaryNum);
int putprin(char *t, long double dig, char fly, char *ss);
int print_string(char *str);
int print_char(char ch);
#endif
