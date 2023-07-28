#include "main.h"
/**
 * _strncat - cancates the string
 * @dest: input value1
 * @src: input value2
 * @n: input value three
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;

while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
