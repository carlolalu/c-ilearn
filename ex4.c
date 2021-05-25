#include<stdio.h>

int main(void)
{
char name[10];
char code[20];
float price;

printf("For the product write:<name>,<code>,<price>:\n");
scanf("%c,%c,%f",name, code, &price);

return 0;
}
