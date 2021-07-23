/* ex 11.14 page 264 */

#include<stdio.h>

int power(int base, int exp);


int main(void)
{
  int a = 5, b = 5, c = 0;
  c = power(a, b);

  printf("\n%d", c);

  return 0;
}

int power(int base, int exp)
{
  static  int product = base;
  for(int i=0; i<exp; i++)
  {
    product *= base;
  }
  return product;
}
