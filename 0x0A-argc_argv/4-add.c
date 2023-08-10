#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adding +ve number
 * @argc: number of commandline args
 * @argv: nuber of commsnd line vector
 * Return: 0 duccess
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;
for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
