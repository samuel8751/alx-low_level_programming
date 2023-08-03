#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
char *s;

s = "Hello, Holberton!";
n = _strlen_recursion(s);
printf("%d\n", n);
n = factorial(5);
printf("%d\n", n);
n = _pow_recursion(2, 4);
printf("%d\n", n);
n = _sqrt_recursion(25);
printf("%d\n", n);
n = is_prime_number(1);
printf("%d\n", n);
n = is_palindrome("level");
printf("%d\n", n);
s = "Corbin Coleman";
n = wildcmp(s, "Corbin C*");
printf("%d\n", n);
return (0);
}
