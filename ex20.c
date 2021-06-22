/* ex9.1 page 194 */
/*why does't it work if I declare the variale as char ad ot as int?
 * this happes ecause ecause y default char hold 1 yte of iformation, and is SIGNED, therefore holds values between -128 and 126, or some numbers aìnear to this two, and therefore if I require the for cycle to stop just when the char variable is >255, the variable will never be, because it will store maximum a value of 128, and if we would require it to store a higher value, this will be reduced modulo 255 and it iwll be summed to -126, and that will be the value stored (wrapping), therefore still under 128, and never 255 or above */

#include<stdio.h>

int main(void)
{
  int i;
  for(i=0;i<255;i++)
  {
    printf("\nthe value of \"%c\" is %d", i,i);
  }
  return 0;
}
