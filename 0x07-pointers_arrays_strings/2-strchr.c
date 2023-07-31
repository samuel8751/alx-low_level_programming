#include "main.h"
/**
 * _strchar - locates a character in a string
 * @s: the string to be searching
 * @c: the character to locate
 * Return: pointer to occurrence
 */
char *_strchar(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
