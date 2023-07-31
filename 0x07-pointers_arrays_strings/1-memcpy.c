#include "main.h"
/**
 * _memcpy - function copies n bytes from mem area
 * @n: function copies
 * @src: source of the buffer
 * @dest: to memory area
 * Return: a pointer to desrination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
