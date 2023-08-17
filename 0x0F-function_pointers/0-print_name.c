#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer.
 *
 * Description: This function takes a name and a function pointer.
 *              It calls the function pointer, passing the name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

