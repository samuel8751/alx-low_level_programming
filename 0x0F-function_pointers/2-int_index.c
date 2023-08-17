#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.              *
 * Return: The index of the first elem.
 * If no element matches, return -1.
 * If size is less than or equal to 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
