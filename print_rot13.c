#include "main.h"
/**
 *print_rot13 - prints string in order of rot13
 *
 *@args: va_list type
 *
 *Return: number of charchters
*/
int print_rot13(va_list args)
{
char *s = va_arg(args, char *);
int index_s, index_l, len_string;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r_letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char ch;

len_string = 0;
for (index_s = 0; *(s + index_s) != '\0'; index_s++)
{
len_string++;
ch = s[index_s];
if ((ch <= 122 && ch >= 97) || (ch <= 90 && ch >= 65))
{
for (index_l = 0; index_l < 56; index_l++)
{
if (*(s + index_s) == letters[index_l])
{
ch = r_letters[index_l];
write(1, &ch, 1);
break;
}
}
}
else
{
write(1, &ch, 1);
}
}
return (len_string);

}
