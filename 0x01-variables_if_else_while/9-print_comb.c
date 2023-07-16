#include <stdio.h>
/**
 * main - prints all single letters separated by , then space
 *
 * Return: always(0)
 *
 */
int main(void)
{
int numbers;

numbers = '0';
while (numbers <= '9')
{
putchar(numbers);
if (numbers <= '8')
{
putchar(',');
putchar(' ');
}
numbers++;
}
putchar('\n');
return (0);
}
