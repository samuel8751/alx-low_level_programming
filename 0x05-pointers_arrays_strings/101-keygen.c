#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 63

/**
 * generate_password - Generates a random password.
 * Return: A pointer to the generated password.
 */
char *generate_password(void)
{
    static char password[PASSWORD_LENGTH + 1];
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789,.-#?!";
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main(void)
{
    char *password = generate_password();
    printf("%s\n", password);

    return 0;
}

