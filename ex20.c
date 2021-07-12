/* ex9.1 page 194 */
#include<stdio.h>

int main(void)
{
  int i;
  for(i='a';i<'a'+255;i++)
  {
    printf("\nthe value of \"%c\" is %d", i,i);
  }
  return 0;
}
