#include <stdio.h>
/**
 * main - printing single digit numbwrs using putchar
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
numbers++;
}
putchar('\n');
return (0);
}
