/*ex 8.10 page 192 */

#include<stdio.h>
#define SIZE 20

int main(void)
{
  float arr[SIZE] = {0}, *ptr=arr;
  for(int i=0; i<SIZE; i++)
  {
    /*here we do the check-in for the numbers */
    for(;;)
    {
      printf("\nInsert a number: ");
     /*here we store the number in arr[i] */
      scanf("%f", &arr[i]);
      /*here we let teh adress ptr+j go through the arr
       * and at the first number which is equal arr[i] stores
       * -99*/
      for(int j=0; j<i; j++)
      {
        if(*(ptr+j)==arr[i])
        {
          arr[i]=-99;
          break;
        }
      }
    /*how do I verify that scanf received a number? */
    if(arr[i])
    {
      printf("\tThis is a valid number");
      break;
    }
  }
  printf("\n%d-th number inserted", i);
  }
  printf("\nAll 100 numbers stored: ");
  for(int i=0; i<SIZE;i++)
    printf("%f, ",arr[i]);
  return 0;
}
