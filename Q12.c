#include <stdio.h>
int main()
{
   int x = 123, R, T;
   R = x % 10;
   T = x / 10;
   x = (R * 100) + T;
   printf("%d %d %d",x, R,T);
    return 0;
}
