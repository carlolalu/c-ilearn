#include<stdio.h>

int main(void)
{
int ans;
int points;

for(;;)
{
scanf("%d", &ans);
if(ans>=1 && ans<=3)
	break;
}

switch(ans)
{
case 1:
points=2;
break;
case 2:
points=1;
break;
case 3:
points=3;
break;
}

printf("\nthe number of points you got was: %d", points);

return 0;

}
