#include "main.h"
/**
 *print_hex_lower - prints hexadecimal number
 *
 *@args: va_list which needs to prrint
 *
 *Return: integer number
 */
int print_hex_lower(va_list args)
{
char num, sa[50];

int dig = va_arg(args, int);
num = decTohexdecimal(dig, sa, 0);
return (write(1, sa, num));
}
