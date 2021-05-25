#include<stdio.h>

int main(void)
{
float bmi, height, weight;

printf("insert <height>,<weight>;\n");

scanf("%f,%f",&height,&weight);

bmi = weight/(height*height);

if (bmi<20)
    printf("\nLower than normal weight");
else if (bmi>=20 && bmi<=25)
    printf("\nNormal weight");
else if (bmi>25 && bmi<=30)
    printf("Overweight");
else if (bmi>30 && bmi<=40)
    printf("Obese");
else if (bmi>40)
    printf("Extremely Obese");

printf("\nBMI:%.2f",bmi);

return 0;
}
