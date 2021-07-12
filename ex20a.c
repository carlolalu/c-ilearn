/* old problem I had, which I would like to overcome: nested loops, in particular how to deal with an arbitrary
number of nested fors, or nested whiles, and so on */

#include <stdio.h>

int main(void)
{
int a=0 ,b=0,c=0;

printf("Enter the number \"a\": ");
scanf("%d", &a);

do
{
printf("Enter the number \"b\": ");
scanf("%d", &b);
} while(b<=a);

do
{
printf("Enter the number \"c\": ");
scanf("%d", &c);
} while(c<=b);




return 0;
}
