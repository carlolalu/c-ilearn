#include <stdio.h>

int main(void)
{

float price1, price2, *pr1, *pr2;

pr1=&price1, pr2=&price2;
for(;;)
{
    printf("Enter price 1: ");
    scanf("%f", pr1);
    if(*pr1>0)
        break;
}

for(;;)
{
    printf("Enter price 2: ");
    scanf("%f", pr2);
    if(*pr2>0)
        break;
}

if(*pr1>*pr2)
    printf("%.2f", *pr1);
else
    printf("%.2f", *pr2);

return 0;
}
