#include<stdio.h>

int main(void)
{
float pr1, pr2, pr3;

printf("Write the three prices separated b a comma:\n");

while (scanf("%f,%f,%f", &pr1, &pr2, &pr3)!=3)
{
printf("Write the three prices separated b a comma:\n");
}

printf("\nthe prices are:%.2f %.2f %.2f", pr1, pr2 ,pr3);

if ((pr1>100)||(pr2>100)||(pr3>100))
{
printf("\nthere is a price higher than 100$");
}
else
{
printf("\nthere is no price higher than 100$");
}

return 0;
}
