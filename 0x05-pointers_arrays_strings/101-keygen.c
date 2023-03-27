#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main Generates random valid passwords for the
 *  program 101-crackme.
 *  Return: Always 0.
 */

int main(void)
{
    char password[85] = {0};
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    for (i = 0; i < 84; i++) {
        password[i] = charset[rand() % (sizeof charset - 1)];
    }

    printf("%s", password);
    return (0);
}
