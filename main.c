#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
unsigned int ui;
long int l, res;
l = UINT_MAX + 1024;
res = (long int)INT_MAX * 2;
ui = (unsigned int)INT_MAX + 1024;
_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("%u\n", -1024);
    printf("%u\n", -1024);
    _printf("%u\n", UINT_MAX);
    printf("%u\n", UINT_MAX);
    _printf("%u\n", l);
    printf("%u\n", l);
    _printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
    printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
    _printf("%o\n", -1024);
    printf("%o\n", -1024);
    _printf("%o\n", l);
    printf("%o\n", l);
    _printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
    printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
    _printf("%x\n", -1024);
    printf("%x\n", -1024);
    _printf("%x\n", l);
    printf("%x\n", l);
    _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
    printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
 return (0);
}
