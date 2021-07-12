/* ex 10.42 page 239 */

#include<stdio.h>
#include<string.h>

int main(void)
{
  char names[10][40]={0};

  printf("\nGimme now 10 names");
  for(int i=0; i<10; i++)
    fgets(names[i], 40, stdin);

  printf("\nNow I will tell you which ones start with an 'a' and end with an 's'");
  for(int i=0; i<10; i++)
  {
    int index = strlen(names[i])-2;
    if(names[i][0]=='a' && names[i][index]=='s')
      printf("%s", names[i]);
  }

  return 0;
}
