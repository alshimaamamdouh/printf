#include "main.h"
/**
 *print_binary - prints binary format
 *
 *@args: va_list type, hich needs to print
 *
 *Return: number of charcters which is printed
*/
int print_binary(va_list args)
{
int num_of_ch;
char num1, sa[50];
unsigned int dig2;

num_of_ch = 0;

dig2 = va_arg(args, unsigned int);
num1 =  decToBinary(dig2, sa);
num_of_ch += write(1, sa, num1);

return (num_of_ch);
}
