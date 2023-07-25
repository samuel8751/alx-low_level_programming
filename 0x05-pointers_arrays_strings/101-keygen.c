#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password and adjusts its sum of ASCII values
 *        to 2772.
 * Return: 0 for success.
 */
int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff_half1, diff_half2;

    srand(time(0));

    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index++];
    }

    password[index] = '\0';

    if (sum != 2772)
    {
        diff_half1 = (sum - 2772) / 2;
        diff_half2 = (sum - 2772) / 2;

        if ((sum - 2772) % 2 != 0) // Corrected: Remove quotes around 0 to check for an odd number.
            diff_half1++;

        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half1))
                password[index] -= diff_half1; // Corrected: Use -= instead of >=.
        }

        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff_half2))
                password[index] -= diff_half2;
        }
    }

    printf("%s\n", password); // Moved this line inside the main function.

    return (0);
}

