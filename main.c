#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int i;
    char ar[1000];
    for (i = 0; i < 999; i++)
    {
	    ar[i]='g';
    }
    _printf(ar);
    _printf(NULL);
    _printf("%s\n",NULL);
    _printf("%c\n",NULL);
    printf("%c\n",NULL);
    printf("css%ccs%scscscs\n", 'T',"Test");
    _printf("%\n"); 
len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
   _printf("Let's try to printf a simple sentence.\n");
    _printf("empty String:[%s]\n", "");
    printf("empty String:[%s]\n", "");
    _printf("Space String:[%s]\n", " ");
    printf("Space String:[%s]\n", " ");
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%s%s]\n", "I am a string !", "second string !");
    printf("String:[%s%s]\n", "I am a string !", "second string !");
    _printf("bin:[%b]\n", 305419896);
    printf("bin:[%b]\n", 305419896);
    _printf("%b\n", 98);
    printf("%b\n", 98);
    _printf("%b\n",-98);
    _printf("%b\n", 0);
    _printf("%b\n", NULL);
    _printf("%b\n", 'x');
    _printf("%b\n", "1234");
  
    _printf("%b\n", 1.2);
    _printf("%b\n", .2);

    return (0);
}
