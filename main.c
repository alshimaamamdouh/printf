#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
_printf("%r", "\nThis sentence is retrieved from va_args!");
 _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
  _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
  
  return (0);
}
