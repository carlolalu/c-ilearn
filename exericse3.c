#include<stdio.h>

int main(void)
{
float f;
int i;

printf("write:<float>,<integer>");

scanf("%f,%d",&f,&i);

float f1 = (f+i)*3;

printf("\nthe triple of the sum of the two numbers is %f",f1);

return 0;
}
