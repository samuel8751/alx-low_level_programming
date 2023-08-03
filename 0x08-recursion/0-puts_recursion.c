#include "main.h"
/**
 * _puts_recursion - function puts
 * @s: input s
 * Return: Always(0)
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(S + 1);
}
else
_putchar('\n');
}
