#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void) {
int x, y, n, m;

for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (n = x; n <= '9'; n++)
{
for (m = y + 1; m <= '9'; m++)
{
putchar(x);
putchar(y);
putchar(',');
putchar(' ');

putchar(n);
putchar(m);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
