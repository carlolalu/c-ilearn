/* ex 9.2 page 194 */

/* the value of A is 65 and of a is 97. act consequently bitte */

#include<stdio.h>

int main(void)
{
  int i = 65;
  for(;i<65+26;i++)
    printf("\n%c",i);
  for(i=97;i<97+26;i++)
    printf("\n%c",i);

  return 0;
}
