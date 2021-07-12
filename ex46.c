/* ex 10.32 page 230 */

#include<stdio.h>
#include<string.h>


int main(void)
{
  char str[100]={0};
  char small_str[100]={100};
  char large_str[100]={0};


  while(1)
  {
    printf("\nGimme a string: ");
    fgets(str, 100, stdin);
    if(str[0]=='e' && str[1]=='n' && str[2]=='d')
      break;
    if(strcmp(str,small_str)<0)
      strcpy(small_str, str);
    if(strcmp(str, large_str)>0)
      strcpy(large_str, str);
  }

  printf("\nThe smallest string is:\n%s\n and the largest is:\n%s", small_str, large_str);

  return 0;
}


