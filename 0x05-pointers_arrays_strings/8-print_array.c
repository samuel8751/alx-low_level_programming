#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements
 * @n: arrays of int
 * @a: numb| of array of elements
 * Return: none
 */
void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf("\n");
}
}
printf("\n");
}
