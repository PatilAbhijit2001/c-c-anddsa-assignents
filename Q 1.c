#include <stdio.h>
    int main ()
  {
      int  x, y;
      printf("Enter a number\n");
      scanf("%d",&x);
      y = x % 10;
      printf("The Unit digit of the number is %d",y);
      return 0;
  }
