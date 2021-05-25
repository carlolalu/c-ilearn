/* print a number in bynary form*/

#include<stdio.h>

int main(void)
{

int n=-2;
int arr[8] = {0};

for(;;)
{
    n = -2;
    while(n<-1 || n>=256)
    {
        printf("\nTo terminate enter \"-1\", otherwise enter a positive integer <256=2^8: ");
        scanf("%d", &n);
        if(n==-1)
            return 0;
    }

    for(int counter = 0; counter < sizeof(arr)/sizeof(arr[0]); counter++)
    {
        arr[7-counter]=n%2;
        printf("\narr[7-%d] is: %d", counter, arr[7-counter]);
        n /=2;
    }

    printf("\n");

    for(int counter = 0; counter<sizeof(arr)/sizeof(arr[0]); counter++)
    {
        printf("%d", arr[counter]);
    }
    printf("\n");
}

return 0;
}

