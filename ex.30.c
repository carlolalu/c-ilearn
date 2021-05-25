/* I ask for a positive integer n, and then I ask n integers. With this I construct a nxn
Toeplitz matrix */

#include<stdio.h>
#define SIZE 5

int main(void)
{
int numbers[SIZE]={0};

for(int i=0; i<SIZE; i++)
{
    for(;;)
    {
        printf("Enter the %d-th integer: ", i+1);
        scanf("%d", &numbers[i]);
        if(numbers[i]%1==0)
            break;
    }
}

/*Now we have the dimension and th earray of numbers, how
do we construct the Toeplitz Matrix?*/

int toeplitz[SIZE][SIZE]={0};

for(int i=0; i<SIZE; i++)
{
    for(int j=0; j<SIZE; j++)
    {
        toeplitz[i][j]=numbers[(SIZE-i+j)%SIZE];
    }
}

for(int i=0; i<SIZE; i++)
{
    for(int j=0; j<SIZE; j++)
    {
        printf("%d ", toeplitz[i][j]);
    }
    printf("\n");
}


return 0;
}
