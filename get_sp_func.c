#include "main.h"
/**
 *get_sp_func - Get the function pointer associated with a format specifier.
 *
 *This function takes a single character 's' and searches for a matching format
 *specifier in the 'sps' array, which is an array of 'sp_t' structures.
 *Each structure contains a format specifier character ('sp')
 *and a corresponding function pointer ('f').
 *
 *@s: The format specifier character to search for.
 *
 *Return: The function pointer associated with the matching format specifier,
 *or NULL if no matching format specifier is found.
*/
int (*get_sp_func(char s))(va_list)
{
sp_t sps[] = {
{"c", print_char},
{"s", print_string},
{"i", print_integer},
{"d", print_integer},
{"b", print_binary},
{"r", print_reverse},
{"R", print_rot13}
};
int i;

i = 0;
while (i < 7)
{
if (*(sps[i].sp) == s)
return (sps[i].f);
i++;
}
return (0);
}
