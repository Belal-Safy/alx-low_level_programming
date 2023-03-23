#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * 100 times.
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

  int b;
	for (b = 0; b <= 100; b++)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
