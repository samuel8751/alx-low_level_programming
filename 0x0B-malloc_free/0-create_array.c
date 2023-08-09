#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initialize:
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

