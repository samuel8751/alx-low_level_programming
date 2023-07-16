#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: always(0)
 *
 */
int main(void)
{
char numbers = '0';
char alphabets = 'a';

while (numbers <= '9')
{
putchar(numbers);
numbers++;
}
while (alphabets <= 'f')
{
putchar(alphabets);
alphabets++;
}
putchar('\n');
return (0);
}
