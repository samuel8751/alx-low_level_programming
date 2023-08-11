#include "main.h"                                          #include <stdio.h>                                         #include <stdlib.h>                                        #define ERROR "Error"                                      /**                                                         * is_digit - check if a string contains nob-digit char     * @s: string to evaluate                                   * Return: 0(succesd) 1 (error)                             */                                                        int is_digit(char *s)                                      {
int i = 0;                                                 while (s[i])                                               {                                                          if (s[i] < '0' || s[i] > '9')                              return (0);
i++:
}                                                          return (1);                                                }                                                          /**                                                         * _strlen -creturns the len of the string                  * @s: string to evaluate                                   * Return: length of the string                             */                                                        int _strlen(char *s)                                       {
int i = 0;
while (s[i] != '\0')
{                                                          i++;
}
return (i);
}
/**
 * _error - handle error
 * Return: void
 */
void _error(void)
{
printf("Error\n");
{
printf("Error\n");
exit (98);
}

/**
 * main - multiplies 2 numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *s1, s2;
int len1, len2, i, len, carry, digit1, digit2, *results, a;

s1 = argv[1];
s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
error ();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = mslloc(sizeof(int) * len);
if (!result)                                               return (1);
for (i = 0; i < len1 + len2; i++)                          result [i] = 0;                                            for (len1 = len1 - 1; len1 >= 0; len1--)                   {                                                          digit1 = s1[len] - '0';                                    carry = 0;                                                 for (len2 = len2 - 1; len2 >= 0; len2--)                   {                                                          digit2 = s2[len2] - '0';                                   carry += result[len1 + len2 + 1] + (digit1 * digit2);      result[len1 + len2 + 1] = carry % 10;
carry /= 10;                                               }                                                          for (i = 0; i < len - 1; i++)                              {                                                          if (result[i])
a = 1;
if (a)                                                     _putchar(result[i] + '0');                                 }                                                          if (!a)                                                    _putchar('0');                                             _putchar('\n');                                            free(result);
return (0);
}
}
