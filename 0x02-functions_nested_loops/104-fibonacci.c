#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * to 100 terms
 *
 * Return: Nothing!
 */

void main() {
  const long long int half = 1000000000000 LL;
  long long int n1_h = 0, n1_l = 1, n2_h = 0, n2_l = 2, n3_h, n3_l, i, number;
  number = 99;
  printf("%lld, %lld, ", n1_l, n2_l);
  // loop starts from 2 because 0 and 1 are already printed
  for (i = 3; i < number; ++i) {
    // n3 = n1 + n2;
    n3_l = n1_l + n2_l;
    n3_h = n1_h + n2_h + (n3_l / half);
    n3_l %= half;
    // print n3
    if (n3_h > 0) {
      printf("%lld%lld", n3_h, n3_l);
      if (n3_l != 834555169026)
        printf(", ");
    } else {
      printf("%lld, ", n3_l);
    }
    // n1 = n2;
    n1_h = n2_h;
    n1_l = n2_l;
    // n2 = n3;
    n2_h = n3_h;
    n2_l = n3_l;

  }
  printf("\n");
}
