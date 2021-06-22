/*this program doesn't work, but till I will not be able
to work with strings I cannot repair it, because I cannot
visualise properly its data*/

#include<stdio.h>

int main(void)
{
unsigned short int a, b;
printf("%ld\n",sizeof(a));

scanf("%d",&a);

b=a;
/* how to print a in binary*/

while (a) {
if (a&1) {
printf("1");
}
else {
printf("0");
}
a>>=1;
}

/* how to select the n-th bit in unsigned int a ?
(a<<(8-n))>>7 */


int sum = (b&(1<<8))+(b&(1<<6))+(b&(1<<4))+(b&(1<<2));

printf("\n%d", sum);

return 0;
}
