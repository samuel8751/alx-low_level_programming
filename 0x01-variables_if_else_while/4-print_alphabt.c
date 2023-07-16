#include <stdio.h>
/**
 * main - prints lowercase alphabets except q and e
 *
 * Return: always(0)
 *
 */
int main(void)
{
char alphabets = 'a';

while (alphabets  <= 'z')
	{
if (alphabets != 'q' && alphabets != 'e')
	{
	putchar(alphabets);
		}
	alphabets++;
	}
putchar('\n');
return (0);
	}
