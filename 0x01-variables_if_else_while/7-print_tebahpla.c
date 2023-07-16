#include <stdio.h>
/**
 * main - prints lowercase alphabets in lowercase
 *
 * Return: always(0)
 *
 */
int main(void)
{
char Loweralph = 'z';

while (Loweralph >= 'a')
{
putchar(Loweralph);
Loweralph--;
}
putchar('\n');
return (0);
}
