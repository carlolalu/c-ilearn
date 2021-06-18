/*ex 8.11 page 192 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  int arr[5][5] = {0}, (*ptr)[5];
  ptr = arr;
  srand((unsigned)time(NULL));
  for(int i=0; i<5;i++)
  {
    for(int j=0; j<5; j++)
      arr[i][j] = rand()%9+1;
  }
  
  /*now let su use pointer arithmetic to compute what the exericse requires*/
  int sum_1diag = 0, sum_2diag = 0;

  for(int i=0; i<5;i++)
    sum_1diag +=*(*(ptr+i)+i);
  
  for(int i=0; i<4; i++)
    sum_2diag += *(*(ptr+1+i)+i);
  
  if(sum_1diag ==sum_2diag)
    printf("the sums along the diagonals are %d and %d\n and are equal", sum_1diag, sum_2diag);
  else
  printf("the sums along the diagonals are %d and %d\n and are not equal", sum_1diag, sum_2diag);
    printf("\n");
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
      printf("%d ",arr[i][j]);
    printf("\n");
  }

  return 0;
}


