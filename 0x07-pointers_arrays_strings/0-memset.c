#include "main.h"
/**
 * _memset - fills memory with a constsnt byte
 * @s: memory area to be filled
 * @b: char to be copied
 * @n: number of bytes to be filled
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
