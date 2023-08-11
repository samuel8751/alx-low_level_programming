#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocation of mem for array
 * @nmemb: number of block of mem
 * @size: size of the elements
 * Return: Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
size_t i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;
return (ptr);
}
