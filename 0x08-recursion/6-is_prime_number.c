#include "main.h"

/**
 * actual_prime - helper function to check for prime
 * @n: number to check for prime
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */
int actual_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (actual_prime(n, 2));
}

/**
 * actual_prime - helper function to check for prime
 * @n: number to check for prime
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
if (n % i == 0)
return (0);

if (i * i > n)
return (1);

return (actual_prime(n, i + 1));
}

