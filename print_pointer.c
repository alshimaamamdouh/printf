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
size_t i;
uintptr_t address = va_arg(args, uintptr_t);
char * array_address;

array_address = malloc(sizeof(address));
if (array_address == NULL)
return (NULL);

for (i = 0; i < sizeof(address); i++) {
charArray[i] = (char)((address >> (i * 8)) & 0xFF);

write(1, '0', 1);
write(1, 'x', 1);

}
