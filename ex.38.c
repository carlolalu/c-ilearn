/* ex 8.34 page 178 */
#include <stdio.h>

int main(void)
{

int *ptr, sum, arr[5] = {11, 21, 31, 41, 51};

sum = 0;

for(ptr = arr; ptr <= arr+4; ptr++)
{
    (*ptr)--;
    sum += *ptr;
}

for(ptr = arr; ptr <= arr+4; ptr++)
{
    printf("At the adress %p there is the value %d\n", ptr, *ptr);
}

printf("The sum of the values is %d\n", sum);

return 0;
}


