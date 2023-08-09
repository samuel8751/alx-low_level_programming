#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: The string to be duplicated
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);


	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

