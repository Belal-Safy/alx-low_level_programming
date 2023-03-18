#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int n, m, l, itr1, itr2;
itr1 = 0;
itr2 = 0;

for (n = '0'; n <= '7'; n++)
{
for (m = '1' + itr1; m <= '8'; m++)
{
for (l = '2' + itr2; l <= '9'; l++)
{

putchar(n);
putchar(m);
putchar(l);
if (n != '7' || m != '8' || m != '9' )
{
putchar(',');
putchar(' ');
}

}

itr2++;
}
itr2 = 0;
itr1++;
}


putchar('\n');

return (0);
}
