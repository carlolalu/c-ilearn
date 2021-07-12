#include<stdio.h>

int main(void)
{
float arr[5] = {0};

for(int i=0; i < sizeof(arr)/sizeof(arr[0]);)
{
    arr[i] = 1+(float)++i/10;
    printf("\n%.1f", arr[i]);
}



return 0;
}
