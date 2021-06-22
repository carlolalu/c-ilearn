/* ex 8.20 pag 168 */
#include<stdio.h>

int main(void)
{
int *p1, *p2, *p3, i, j, sum;

p1 = &i;
p2 = &j;
p3 = &sum;

for(;;)
{
    printf("Enter a number i<100: ");
    scanf("%d", p1);
    if(i<100)
        break;
}

for(;;)
{
    printf("Enter a number j<100 and j<i: ");
    scanf("%d", p2);
    if(j<100 || j<i)
        break;
}

for(*p3=0, ++*p1; *p1<*p2; (*p1)++)
{
    *p3 += *p1;
}
printf("the sum is %d", sum);




return 0;
}



