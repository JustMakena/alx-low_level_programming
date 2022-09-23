#include "main.h"

/**
<<<<<<< HEAD
* _strcat - concatenates two strings,
* @dest: destination.
* @src: source.
* Return: the pointer to dest.
*/

char *_strcat(char *dest, char *src);
=======
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
>>>>>>> 8c54e69cd5d9d3aa1fbe83c08c01adb3b9fbdde6
{
int i, j;
i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
