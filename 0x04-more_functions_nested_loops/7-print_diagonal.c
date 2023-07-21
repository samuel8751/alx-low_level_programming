#include "main.h"
/**
 * print_diagonal - draws a diagnal line
 *
 * @n: a parameter
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
int s, i;

if (n <= 0)
{
_putchar('\n');
return;
}
for (s = 0; s < n; s++)
{
for (i = 0; i < s; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

