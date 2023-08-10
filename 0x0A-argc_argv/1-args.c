#include <stdio.h>
/**
 * main - prints number of args passed
 * @argc: number of commandline args
 * @argv: array that contains program commandline args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ (unused))
{
printf("%d\n", argc - 1);
return (0);
}
