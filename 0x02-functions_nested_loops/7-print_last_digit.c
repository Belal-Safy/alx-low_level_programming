#include "main.h"

/**
 * print_last_digit - check the code
 * @c: character
 * Return: Always 0.
 */

long int print_last_digit(int c)
{
int last = abs(c % (long int)10);
_putchar(last + '0');
return (last);
}
