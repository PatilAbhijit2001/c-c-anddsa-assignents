#include <stdio.h>
int main()
{
   int sum , x =243;
   sum = x % 10;
   x = x / 10;
   sum = (x% 10) + sum;
   x = (x/10);
   sum = x + sum;
   printf("sum = %d ",sum);



   return 0;

}
