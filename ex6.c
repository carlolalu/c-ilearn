#include<stdio.h>

int main(void)
{
float pri1, pri2, pri3;
printf("Write:<price>,<price>,<price>\n");
scanf("%f,%f,%f",&pri1,&pri2,&pri3);

float avg = (pri1 +pri2 + pri3)/3;

printf("\nthe prices are: %f, %f, %f\nthe average is: %f", pri1, pri2, pri3, avg);


return 0;
}
