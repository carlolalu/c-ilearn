#include<stdio.h>

int main(void)
{
int num;
printf("Enter a number:");
scanf("%d", &num);

/* num in binary is read form the right to the left*/
/* let us now print the number num in binary (for now we write it reversed because yet I do not know how to work with strings*/

int i=0;
printf("\nthe number written in binary: ");

for(i=0; i<sizeof(num)*8; i++)
{
printf("%d", (num&(1<<i))>>i);
}

/* let us write the sum of all the even digits in binary form, but working with bites*/

int sum=0;

for(i=0; i<sizeof(num)*8; i+=2)
{
sum += (num&(1<<i))>>i;
printf("\nactual sum: %d\nactual digit:%d", sum,(num&(1<<i))>>i);
}
printf("\nthe sum of the even digits of the number written in binary form: %d",sum);


return 0;
}
