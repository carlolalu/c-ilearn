#include<stdio.h>

int main(void)
{
int a=10,b=20;

int *ptr_a, *ptr_b;

ptr_a=&a;
ptr_b=&b;

printf("the content of a is %d, its adress is %p, stored in ptr_a\nthe content of b is %d, its address is %p, stored in ptr_b\n", *ptr_a, ptr_a, *ptr_b, ptr_b);
printf("the address of ptr_a is %p, and the address of ptr_b is %p", &ptr_a, &ptr_b);


return 0;
}
