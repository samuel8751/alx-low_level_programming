#include <stdio.h>
/**
 * main - prints _putchar
 *
 * Return always (0)
 *
 */
int main(void)
{
char ch[] = "_putchar";
int i = 0;

for (i = 0; i <= 7;  i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);

}
