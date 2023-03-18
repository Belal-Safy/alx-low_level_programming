#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int n, m, itr;
itr = 0;

for (n = '0'; n <= '8'; n++)
{
for (m = '1' + itr; m <= '9'; m++)
{
putchar(n);
putchar(m);
if (n != '8' || m != '9')
{
putchar(',');
putchar(' ');
}
}
itr++;
}
putchar('\n');

return (0);
}
