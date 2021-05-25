#include<stdio.h>

int main(void)
{
int i1, i2;
printf("Write: <integer>,<integer>\n");
scanf("%d,%d",&i1,&i2);

int sum=i1+i2;
int product = i1 * i2;
int difference = i1 - i2;
float division = (float)i1 / i2;
printf("sum = %d,\nproduct = %d,\ndifference = %d\ndivision = %f", sum, product, difference, division);

return 0;
}
