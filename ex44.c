/*ex 10.25 page 223 */

#include<stdio.h>
#include<string.h>

int main(void)
{
  char UPC[12];

  printf("\nInsert the UPC (=Universal Product Code): ");
  fgets(UPC,12,stdin);

  /* work on the UPC, assuming that the int value of the char
   * digit 'n' is exactly n. I will eventually modify the code if 
   * this will not come out as true*/

  int first = 0;
  for(int i=0; i< (12/2); i++)
    first += UPC[i];
  first = first*3;
  for(int i=0; i<(12/2)-1; i++)
    first += UPC[i];
  int check = 10 - (first %10);

  int condition = (check==UPC[12]);

  printf("\nThis is the condition %d", condition);

  return 0;
}
