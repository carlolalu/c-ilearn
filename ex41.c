/* ex 10.17 page 218 */

#include<stdio.h>
#include<string.h>


int main(void)
{
  char str[101];

  printf("Enter text: ");
  fgets(str,100, stdin);
  
  printf("\n%s", str);

  int index = strlen(str)-2; /* position of the last character*/

  printf("\nindex = %d", index);
  printf("\n'aa' in the final = %d", str[index]=='a' && str[index-1]=='a');

  if(str[index]=='a' && str[index-1]=='a')
  {
    printf("\n");
    for(int i=index; i!=-1; i--)
    {
      printf("%c", str[i]);
    }
  }
  return 0;
}

