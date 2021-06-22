/* exercise 2*/
/* a program which assigns to each number written in decimal form, the sum of its digits, and outputs it in decimal form*/
#include <stdio.h>

int main(void)
{
int num = 47;
int digit_1 = num%10;
int digit_2 = (num - digit_1)/10;
printf("sum of the digits in num: %d", digit_1+digit_2);

return 0;
}
