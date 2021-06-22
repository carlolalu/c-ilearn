#include<stdio.h>
#define SIZE 6

int main(void)
{

int a[SIZE][SIZE]={0};

for(int i=0; i<SIZE; i++)
{
    a[i][i]++;
}

for(int i=0; i<SIZE; i++)
{
    for(int j=0; j<SIZE; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}

return 0;
}
