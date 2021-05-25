/*ex 8.23 page 172*/
#include<stdio.h>

int main(void)
{
int grades[10], max=0, *p_max=grades;

for(int i=0; i<10; i++)
{
    do
    {
        printf("Enter the grade number %d: ", i);
        scanf("%d", grades+i);
    } while(*(grades+i)<0 || *(grades+i)>10);
}

for(int i=0; i<10; i++)
{
    if(*(grades+i)>max)
    {
        max=*(grades+i);
        p_max=grades+i;
    }
}

int max_place = p_max-grades;

printf("the maximum grade is %d, and it is in the position %d", max, max_place);


return 0;
}

