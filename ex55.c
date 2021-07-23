/* ex 11.22 page 270 */

#include<stdio.h>

float *greater(float arr[]);
void take(float arr[]);

int main(void)
{
  float arr[2]= {0};
  take(arr);
  printf("the greater value is: %f", *greater(arr));
  return 0;
}


float *greater(float n[])
{
  if(*n < *(n+1))
  {
    return n+1;
  }
  else
    return n;
}


void take(float arr[])
{
  printf("gimme some floats; ");
  scanf("%f", arr);
  scanf("%f", arr+1);
}


