#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
    int len;
    int len2;
    
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    len =_printf("%                c",'l');
 printf("len = %d; len2 = %d\n",len,len2);
 return (0);
}
