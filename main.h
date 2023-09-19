#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct sp
{
char *sp;
int (*f)(char *s);
} sp_t;

int (*get_sp_func(char *s))(char *);
int _printf(const char *format, ...);
char itoa_generic (char* u8ptrbuf, double u32int_value);
void putprin(char *t ,long double dig, char fly, char *ss);
int print_string(char * str);
int print_char(char *ch);
int print_integer(char *ch);
int print_persentage(char *ch);
#endif
