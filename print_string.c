#include "main"
/**
 * print_string - Print a string to the standard output.
 *
 * This function takes a `va_list` argument `args` and retrieves a pointer to
 *a null-terminated string from it. It then prints the string
 *to the standard output using the `write` function.
 *
 * If the provided string is `NULL`
 *the function prints the string "(null)" instead.
 *
 *@args: A `va_list` containing the string to be printed.
 *
 *Return: The number of characters printed (including the null terminator)
 *or -1 if there was an error.
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int str_len = 0;
char *s = "(null)";

if (str == NULL)
{
while (*(s + str_len) != '\0')
str_len++;
write(1, s, str_len);
return (str_len);
}
while (*(str + str_len) != '\0')
str_len++;
write(1, str, str_len);
return (str_len);
}
