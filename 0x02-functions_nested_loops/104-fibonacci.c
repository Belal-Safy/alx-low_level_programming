#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * to 100 terms
 *
 * Return: Nothing!
 */

int main() {
  const unsigned long int half = 1000000000000;
  unsigned long int n1_h = 0, n1_l = 1, n2_h = 0, n2_l = 2, n3_h, n3_l, i, number;
  number = 99;
  printf("%ld, %ld, ", n1_l, n2_l);
  
  for (i = 3; i < number; ++i) {
    
    n3_l = n1_l + n2_l;
    n3_h = n1_h + n2_h + (n3_l / half);
    n3_l %= half;
    
    if (n3_h > 0) {
      printf("%ld%ld", n3_h, n3_l);
      if (n3_l != 834555169026)
        printf(", ");
    } else {
      printf("%ld, ", n3_l);
    }
    
    n1_h = n2_h;
    n1_l = n2_l;
    
    n2_h = n3_h;
    n2_l = n3_l;

  }
  printf("\n");
  return (0);
}
