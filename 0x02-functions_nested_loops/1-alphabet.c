#include "main.h"
/**
 * print_alphabet - prints all letters in lowecase
 *
 * description: This finction prints lowercase letters
 *
 */
void print_alphabet(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
_putchar(letters);
_putchar('\n');
}
