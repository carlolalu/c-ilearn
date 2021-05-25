#include<stdio.h>

int main(void)
{
int given;
int sum=0;

while(sum<=100)
{
printf("\nEnter a number: ");
scanf("%d", &given);
sum += given;
}

printf("you reached the limit, your sum is: %d", sum);

return 0;
}
