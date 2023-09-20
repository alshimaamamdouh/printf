#include "main.h"
/**
 *_printf - produces output according to a format.
 *
 *@format: string
 *
 *Return: the number of characters printed
 *excluding the null byte used to end output to strings
*/
int _printf(const char *format, ...)
{
int n = 0, num_of_ch = 0, num1 = 0;
char *s;
char ch;
char num, sa[50];
int dig;
long int dig2;
va_list args;

va_start(args, format);
if (format == NULL)
return (-1); ;
while (format && format[n])
{
if (format[n] == '\0')
break;
if (format[n] != '%')
{
num_of_ch += write(1, &format[n], 1);
}
else if (format[n + 1])
{
n = n + 1;
if (format[n] == '%')
{
num_of_ch += write(1, &format[n], 1);

}
else if (format[n] == 'c')
{
ch = va_arg(args, int);
num_of_ch = num_of_ch + print_char(ch);
}
else if (format[n] == 's')
{
s = va_arg(args, char *);
num_of_ch = num_of_ch + print_string(s);
}
else if (format[n] == 'i' || format[n] == 'd')
{
dig = va_arg(args, int);
num = itoa_generic(sa, dig);
num_of_ch += write(1, sa, num);
}
else if (format[n] == 'b')
{
dig2 = va_arg(args, long int);
if (dig2 == 0)
{
sa[0] = '0';
num_of_ch += write(1, sa, 1);
}
else if (dig2 < 0 || dig2 > 0xffffffff)
{
return (-1);
}
else
{
num1 =  decToBinary(dig2, sa);
num_of_ch += write(1, sa, num1);
}
}
else
{
num_of_ch += write(1, &format[n - 1], 1);
num_of_ch += write(1, &format[n], 1);
}
}
n++;
}
va_end(args);
return (num_of_ch);
}
