#include <stdio.h>

int main(void)
{
int min_neg=0, max_pos=0, given=0;

do
    {
    printf("\nEnter a number: ");
    scanf("%d", &given);
    if(given<0 && given<min_neg)
        min_neg = given;
    if(given>0 && given>max_pos)
        max_pos = given;
    } while(given != 0);

if(min_neg==0 || max_pos==0)
    printf("you remained just on one side of 0");
printf("\nThe maximum positive integer was %d and the minimum negative integer was %d", max_pos, min_neg);

return 0;
}
