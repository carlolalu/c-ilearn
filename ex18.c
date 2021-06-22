/*ex 8.11 page 192 */

#include<stdio.h>

int main(void)
{

int a1 = 1, a2 = 2, *p1 =&a1, *p2 = &a2, tmp;

printf("\na1 = %d, a2= %d", a1, a2);
  
/*swap a1 and a2*/

tmp = *p1;
*p1 = *p2;
*p2 = tmp;

printf("\na1 = %d, a2= %d", a1, a2);
return 0;
}


