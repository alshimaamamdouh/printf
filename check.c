#include "main.h"

/**
 *check - check function
 *@ch: input character
 *@ui2: input double
 *
 *Return: double
 *
 */

double check(char ch, double ui2)
{
if (ch == 'u')
{
if (ui2 < 0)
{
ui2 = 4294967295 + ui2 + 1;
}
}

return (ui2);
}
