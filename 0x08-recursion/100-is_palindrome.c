#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * _is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if it is a palindrome, 0 if not
 */
int _is_palindrome(char *s)
{
    if (*s == '\0')
        return (1);
    return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursively check for palindrome
 * @s: string to check
 * @i: iterator
 * @len: string length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
    if (*(s + i) != *(s + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (check_pal(s, i + 1, len - 1));
}

