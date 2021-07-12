#include <stdio.h>

int main(void)
{
int counter=111;

for(; counter<=999 ; counter++)
    {
    if( (counter/100)==4 || (counter%10)==6 )
        continue;
    printf("\n%d", counter);
    }

return 0;
}
