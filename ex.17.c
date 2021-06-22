#include<stdio.h>

int main(void)
{
int hello_counter=0;
int turn=1;

while(turn>0)
    {
    while(1)
        {
        printf("\nEnter number: ");
        scanf("%d", &turn);
        if(turn<1000) break;
        else printf("\nEnter integer number <1000");
        }
    if(turn>0)
        {
        printf("\n");
        for(int i=0; i<turn ;i++)
            {
            printf("Hello");
            hello_counter++;
            }
        }
    }

printf("\nNumber of \"Hello\"s: %d", hello_counter);
return 0;
}










