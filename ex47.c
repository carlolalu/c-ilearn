/* ex 10.34 page 231 */

#include<stdio.h>
#include<string.h>

int main(void)
{
  char str[100];

  printf("Gimme a string: \n");
  fgets(str, 100, stdin);

  int len = strlen(str);
  for(int i=len-1; i>=0; i--)
    printf("%c", str[i]);

  return 0;
}

