#include <stdio.h>
/**
 * swap_int - swaps integer values
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

