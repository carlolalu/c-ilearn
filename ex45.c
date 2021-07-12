/* ex 10.30 page 229 */

#include<stdio.h>
#include<string.h>

int main(void)
{
  char str1[100], str2[100];

  /* input the strings */

  printf("Gimme two strings\nstring 1: ");
  fgets(str1, 100, stdin);
  printf("\nstring 2: ");
  fgets(str2, 100, stdin);

  /* work on them */

  if(strcmp(str1, str2)==0)
  {
    printf("\nthe two strings are equal");
    return 0;
  }

  printf("\nthe two strings are different and \nstrncpy of the first 3 characters returns %d", strncpy(str1,str2,3));

  return 0;
}

