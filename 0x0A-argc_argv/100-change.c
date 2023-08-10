#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min no coin to make a change
 * @argc: no commandline args
 * @argv: arrays that holds commandline args
 * Return: 0;
 */
int main(int argc, char *argv[])
{
int cents, mincoin = 0;
if (argc == 1 || argc > 2)
{
printf("Error\n");
return (2);
}
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 1;
mncoin += 1;
}
printf("%d\n", mncoin);
return (0);
}
