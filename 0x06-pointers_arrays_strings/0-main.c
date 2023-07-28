#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Test the _strcat function by concatenating two strings.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;

printf("%s\n", s1);
printf("%s", s2);
ptr = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);

return (0);
}

