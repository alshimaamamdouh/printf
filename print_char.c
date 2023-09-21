#include "main.h"
/**
 *print_char - prints char
 *
 *@args: char which needs to print
 *
 *Return: 1
*/
int print_char(va_list args)
{
char ch = va_arg(args, int);
write(1, &ch, 1);
return (1);
}
