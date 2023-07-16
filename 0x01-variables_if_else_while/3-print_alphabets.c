#include <stdio.h>
/**
 * main - prints alphabets in lowercase then in uppercase
 *
 * Return: always(0)
 *
 */
int main(void)
{
char Lowercase = 'a';
char Uppercase = 'A';

while (Lowercase <= 'z')
{
putchar(Lowercase);
Lowercase++;
}
while (Uppercase <= 'Z')
{
putchar(Uppercase);
Uppercase++;
}
putchar('\n');
return (0);
}
