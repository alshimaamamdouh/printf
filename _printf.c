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
int n = 0, num_of_ch = 0;
va_list args;
int (*sp_result)(va_list);
va_start(args, format);
if (format == NULL)
return (-1);
while (format && format[n])
{
if (format[n] == '\0')
break;
if (format[n] != '%')
{
num_of_ch += write(1, &format[n], 1);
}
else
{
n++;
if (format[n] == '%')
{
num_of_ch += write(1, &format[n], 1);
}
else if (format[n] != '%')
{
sp_result = get_sp_func(format[n]);
if (sp_result != NULL)
num_of_ch += sp_result(args);
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
