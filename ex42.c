/* ex 10.18 page 219 */

#include<stdio.h>
#include<string.h>

int main(void)
{
  char str1[100], str2[200];

  printf("Imbunisi la stringa mulon: ");
  fgets(str1, 100, stdin);

  /* actual work on str1 to produce str2 */

  int j=0;
  
  for(int i=0; i<100; i++)
  {
    if(str1[i]=='a')
    {
      str2[j]=str2[j+1]='a', j+=2;
      continue;
    }
    str2[j]=str1[i];
    j++;
  }
  

  printf("\n%s\n%s\n", str1, str2);

  return 0;
}
