#include <stdio.h>

int main(void)
{
    int given=0, negs=0;

    for(int counter=0; counter<10;)
    {
        printf("\nEnter a positive number: ");
        scanf("%d", &given);
        if(given<0)
        {
            printf("\nThis number is negative! Enter another one!");
            negs++;
            continue;
        }
        if(given==0)
        {
            printf("\nThis is 0! Enter another number!");
            continue;
        }
        counter++;
    }
    printf("\nWondering how many times you entered a negative number? %d", negs);
    return 0;
}




