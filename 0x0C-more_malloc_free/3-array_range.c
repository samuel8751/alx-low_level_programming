#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
int i, m;
int *a;
if (min > max)
return (NULL);
m = max - min + 1;
a = malloc(sizeof(int) * m);
if (a == NULL)
return (NULL);
for (i = 0; i < m; i++)
{
a[i] = min;
min++;
}
return (a);
}

