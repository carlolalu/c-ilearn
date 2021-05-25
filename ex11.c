#include<stdio.h>

int main(void)
{
int choice;
float sira, area;

printf("input the number:\n");
scanf("%f",&sira);


printf("\n0 for the area of the square, 1 for the area of the circle:\n");
scanf("\n%d",&choice);

switch(choice)
{
case 0:
{area=sira*sira; printf("%f",area); break;}
case 1:
{area=sira*sira*3.14; printf("%f",area); break;}
default:
{printf("choice not valid"); break;}
}
return 0;
}



