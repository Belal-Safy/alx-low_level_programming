#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
