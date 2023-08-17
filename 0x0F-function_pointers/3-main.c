#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result, i;
    char *operator;
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    if (argc != 4)
    {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    operator = argv[2];
    num2 = atoi(argv[3]);

    if (num2 == 0 && (*operator == '/' || *operator == '%'))
    {
        printf("Error\n");
        return 100;
    }
    i = 0;
    while (ops[i].op != NULL)
    {
        if (*ops[i].op == *operator && *(operator + 1) == '\0')
        {
            result = ops[i].f(num1, num2);
            printf("%d\n", result);
            return 0;
        }
        i++;
    }

    printf("Error\n");
    return 99;
}

