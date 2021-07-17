/* ex 11.2 page 251 */

#include<stdio.h>

float circ_area(float radius);
void print(float radius);


int main(void)
{
  float radius = 2;
  print(radius);


  return 0;
}

float circ_area(float radius)
{
  return radius*radius*3.1;
}

void print(float radius)
{
  printf("given the radius %f, the area of the circle is %f", radius, circ_area(radius));
}
