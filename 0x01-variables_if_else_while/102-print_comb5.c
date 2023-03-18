#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int x, y, n, m;

for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (n = x; n <= '9'; n++)
{
for (m = x == n ? y + 1 : '0'; m <= '9'; m++)
{
putchar(x);
putchar(y);
putchar(' ');

putchar(n);
putchar(m);
if (x != '9' ||  y + 1 != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
