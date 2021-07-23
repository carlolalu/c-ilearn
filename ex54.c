/* ex 11.15 page 265 */

#include<stdio.h>
#include<string.h>

int char_count(const char str[], char ch);

int main(void)
{
  char str[100];
  printf("\nGimme a 100-char string: ");
  fgets(str, 100, stdin);
  
  char ch;

  printf("\nNow gimme a char to count in the string: ");
  scanf("%c", &ch);

  printf("\nthe char %c appeared %d times in the string", ch, char_count(str, ch));

  return 0;
}


int char_count(const char str[], char ch)
{
  static int counter = 0;
  for(int i=0; i<strlen(str); i++)
  {
    if(str[i]==ch)
      counter++;
  }
  return counter;
}




