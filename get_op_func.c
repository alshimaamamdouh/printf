#include "main.h"
/***/
int (*get_sp_func(char *s))(char *)
{
sp_t sps[] = {
{"c", print_char},
{"s", print_string},
{"i", print_integer},
{"d", print_integer},
{"%", print_persentage},
{NULL, NULL}
};
int i;

i = 0;
while (i < 6)
{
if (*(sps[i].sp) == *s)
return (sps[i].f);
i++;
}
return (NULL);
}
