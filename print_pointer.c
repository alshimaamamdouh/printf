#include "main.h"
/**
 *print_pointer - prints address
 *
 *@args: va_list type
 *
 *Return: number of characters
*/
int print_pointer(va_list args)
{
unsigned int address;
void *ptr;
char array_address[50];
int str_len, num_of_ch = 0;
char ch, num;
char *str = "(null)";

ptr = va_arg(args, void*);
if (ptr == NULL)
{
str_len = 0;
while (*(str + str_len) != '\0')
str_len++;
write(1, str, str_len);
return (str_len);
}
address = (unsigned long int)ptr;

ch = '0';
num_of_ch  += write(1, &ch, 1);
ch = 'x';
num_of_ch  += write(1, &ch, 1);

num = decTohexdecimal(address, array_address, 0);
num_of_ch = (write(1, array_address, num));
return (num_of_ch);
}
