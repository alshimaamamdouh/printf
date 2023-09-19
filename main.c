#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    

   _printf("Let's try to printf a simple sentence.\n");
    _printf("empty String:[%s]\n", "");
    printf("empty String:[%s]\n", "");
    _printf("Space String:[%s]\n", " ");
    printf("Space String:[%s]\n", " ");
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%s%s]\n", "I am a string !", "second string !");

   _printf("String:[%s%s]\n", "I am a string !", "second string !");
    printf("String:[%s %s]\n", "I am a string !", "second string !");

    return (0);
}
