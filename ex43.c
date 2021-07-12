/* ex 10.19 page 219 */

#include<stdio.h>
#include<string.h>

int main(void)
{
  char str[100];
  do
  {
  printf("\nGimme a string: ");
  fgets(str, 100, stdin);
  getchar();
  } while(strlen(str)<3);

  int len = strlen(str);

  /* actual work on the string */

  int i=0;
  int condition = (str[i]==str[i+1] && str[i+1]==str[i+2]);
  while(condition==0 && i<=len-3)
  {
    i++;
    condition = (str[i]==str[i+1] && str[i+1]==str[i+2]);
  }
  if(condition==0)
  {
    printf("there are no triplets");
    return 0;
  }
  printf("the first triplet can be found at index %d", i);

  return 0;
}
