#include "main.h"

/**
 * _isalpha - Checks for lowercase characters.
 *
 * Description: This function checks whether lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}

