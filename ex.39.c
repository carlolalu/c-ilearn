/* das ist eine neue Ubungen das ich mach hier zwischen Wien und Salzburg 

In this exercise I simply do something random. Or amybe not. Or maybe I should use Vim
Who knows?
*/

#include<stdio.h>

float max(float a, float b){};

int main(void)
{
	float (*pf)(float a, float b);
	pf = max;
	float ak = 3, bk = 3;
	float c = (*pf)(ak, bk);

	return 0;
}