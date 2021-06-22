/* ex 8.6 page 191 */

#include<stdio.h>

int main(void)
{
  int *ptr, arr[100];
  
  ptr = arr;
  *ptr = 0;
  
  for(int i=0; i<100;i++)
  {
    do
    {
      printf("\nInsert a number > -20: ");
      scanf("%d",ptr);
    } while(*ptr<-20);
    
    if((*ptr) == -1)
    {
      printf("\n%d numbers were stored: ", i);
      for(int j=0; j<i;j++)
        printf("%d ", arr[j]);
      break;
    }
    ptr++;
    printf("\nCONTROL: *ptr = %d, i = %d", *ptr, i);
  }
  printf("\nall 100 numbers were stored:");
  for(int j=0; j<100;j++)
    printf("%d ", arr[j]);
  return 0;
}
