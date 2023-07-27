#include "main.h"
/**
 * reverse_array - reverses int array
 * @a: array
 * @n: numbers of element in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
