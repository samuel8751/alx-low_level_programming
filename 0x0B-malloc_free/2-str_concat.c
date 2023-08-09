#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int len1 = 0, len2 = 0, total_length;
	char *concatenated;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	total_length = len1 + len2 + 1;

	concatenated = (char *)malloc(total_length * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (unsigned int i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (unsigned int j = 0; j < len2; j++)
		concatenated[len1 + j] = s2[j];

	concatenated[total_length - 1] = '\0';

	return (concatenated);
}

