/* ex 9.9 page 198 */

#include<stdio.h>

int main(void)
{
  int ch;
  int sum = 0;

  for(;;)
  {
    printf("\nchoose a character: ");
    ch = getchar();
    if(ch == 'A')
      break;
    printf("\nyou picked the character %c", ch);
    sum++;
  }
  
  printf("\nthe total number of characters is %d", sum);
  return 0;
}
