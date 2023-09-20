#include "main.h"
/**
 *_printf - produces output according to a format.
 *@format: string
 *
 *Return: the number of characters printed
 *excluding the null byte used to end output to strings
*/
int _printf(const char *format, ...)
{
unsigned char token[1000];
int strl = 0, k = 0, i, strl2 = 0, ch1 = 0, j = 1;
va_list ptr;
va_start(ptr, format);
for (i = 0; ((format != NULL) && (format[i] != '\0')); strl2 = i + 1, i++)
{
token[k++] = format[i];
if ((format[i + 1] == '%' && k != 1) || format[i + 1] == '\0')
{
token[k] = '\0';
k = 0;
if (token[0] != '%')
strl = strl + write(1, token, strl2 + 1);
else
{
j = 1;
while ((ch1 = token[j++]) < 58)
;
if (ch1 == 'i' || ch1 == 'd' || ch1 == 'u' || ch1 == 'h')
{
double ui = va_arg(ptr, int);
if (ch1 == 'u')
{
if (ui < 0)
ui = 4294967295 + ui + 1;
}
strl = strl + putprin((char *)token, ui, 'i', NULL);
}
else if (ch1 == 'c')
strl = strl + putprin((char *)token, va_arg(ptr, int), 'c', NULL);
else if (ch1 == 's')
strl = strl + putprin((char *)token, 0, 's', va_arg(ptr, char *));
else
strl = strl + putprin((void *)0, 0, 's', (char *)token);
}
}
}
if (token == 0 || va_arg(ptr, char*) == 0 || format == NULL)
return (-1);
va_end(ptr);
return (strl);
}
