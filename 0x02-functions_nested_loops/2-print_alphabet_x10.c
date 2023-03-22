#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i;
int c;

for(i = 0;i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}   
}
