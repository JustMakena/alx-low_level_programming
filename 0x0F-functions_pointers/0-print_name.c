#include <stdio.h>
#include "function_pointers.h"

/**
*Function that prints a name
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
printf("Hello my name is %s\n", name);
}
