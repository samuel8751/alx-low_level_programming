#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: String one.
 * @s2: String two.
 * @n: Number of elements to concatenate.
 *
 * Return: Pointer to the concatenated string, NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0' && j < n; j++)
		;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';

	return (s);
}

