/* ex 11.5 page 253 */

#include<stdio.h>

void display(int num, char ch);
void take(void);

int main(void)
{
  take();

  return 0;
}

void display(int num, char ch)
{
  printf("\n");
  for(int i=0; i<num; i++)
  {
    printf("%c ", ch);
  }
  return;
}

void take(void)
{
  int num;
  char ch;
  printf("Gimme a number and a character: ");
  scanf("%d%c", &num, &ch);
  display(num, ch);

  return;
}
