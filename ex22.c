/*ex 9.4 page 195 */

#include<stdio.h>

int main(void)
{
  char q1, q2, tmp;
  printf("Gimme two characters");
  scanf("%c%c", &q1, &q2);

  /*now we should determine who's the first and who's the last*/

  if(q2<q1)
  {
    tmp = q1;
    q1 = q2;
    q2 = tmp;
  }
  
  /* now we print the characters in the middle*/

  int i;
  for(i=1; i<q2-q1; i++)
    printf("%c", q1+i);

  return 0;
}
