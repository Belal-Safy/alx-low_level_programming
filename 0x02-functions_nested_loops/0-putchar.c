#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: void
 */
 
void _putchar(char c)
{
write(1, &c, 1);   
}

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
puts("_putchar");
return (0);
}
