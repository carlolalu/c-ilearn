#include<stdio.h>

int main(void)
{

int init_pop, years;
float growth;

for(;;)
{
printf("\nEnter the initial population: ");
scanf("%d", &init_pop);
if(init_pop%2==1 || init_pop%2==0)
	break;
}

for(;;)
{
printf("\nEnter annual growth in percentage: ");
scanf("%f", &growth);
if(growth>=1 && growth<=100)
        break;
}

for(;;)
{
printf("\nEnter the number of years: ");
scanf("%d", &years);
if(years>=1 && years<=100)
        break;
}

float ans;
growth /= (float)100;

ans = init_pop * ((growth+1)^years);

printf("The number of individuals after such years is: %d", &ans);

return 0;
}
