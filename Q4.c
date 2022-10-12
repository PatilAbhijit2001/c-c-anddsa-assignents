#include <stdio.h>
    int main()
    {
        //here we use float and %f for store and printing fraction number
        float a;
        printf("Enter the radius of circle\n");
        scanf("%f", &a);
        //here we use %0.3f for printing only 3 digits after decimal
        printf("Area of circle is %0.3f having the radius %0.3f",3.14*a*a,a);
        return 0;
    }
