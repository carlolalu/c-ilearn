#include <stdio.h>

int main(void)
{

double *ptr, val;
ptr = &val;

printf("Enter a number: ");
scanf("%lf", ptr);

if(*ptr<0)
    *ptr = -*ptr;

printf("%lf", val);

return 0;
}
