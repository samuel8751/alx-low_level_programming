#include "main.h"
/**
 * rev_string - reverses the string
 * @s: string
 * * Return: noyhing
 */
void rev_string(char *s)
{
int len = 0, index = 0;
char tmp  = 0;

while (s[index++] != '\0')
len++;
for (index = 0; index >= len / 2; index--)
{
s[index] = s[len - index - 1];
s[len - index - 1] = tmp;
}
}
