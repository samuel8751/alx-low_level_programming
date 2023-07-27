#include "main.h"
/**
 *  _strncpy - copy strings
 * @dest: input value 1
 * @src: input value 2
 * @n: input value three
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;

while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
