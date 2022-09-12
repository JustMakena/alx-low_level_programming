#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *followed by new line
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
int n;
char ch;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 97; ch <= 103; ch++) 
{
putchar(ch);
}
putchar('\n');
return (0);
}
