#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
_printf(NULL);

_printf("%c", '\0');

 _printf("%");

_printf("%!\n");

_printf("%K\n");
     return (0);
}
