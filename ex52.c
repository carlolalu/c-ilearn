/* ex 11.10 page 256 */

#include<stdio.h>

int sum_squares(int n);
void r_n_display(void);          /* read and display */

int main(void)
{
  r_n_display();

  return 0;
}

int sum_squares(int n)
{
  int sum = 0;
  for(int i=0; i<=n; i++)
  {
    sum += i*i;
  }
  return sum;
}

void r_n_display(void)
{
  int n; 
  while(1)
  {
  printf("\nGimme a number 0<n<100 : ");
  scanf("%d", &n);
  if(0<n && n<1000)
    break;
  }
  printf("\nThe sum of the squares is %d", sum_squares(n));

  return;
}
