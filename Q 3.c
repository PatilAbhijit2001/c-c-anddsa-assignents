#include <stdio.h>
int main ()
{
    int x ,y, z;
    printf("Enter the two numbers\n");
    scanf("%d %d",&x ,&y);
    z = x;
    x = y;
    y = z;

    printf("These are the swap numbers %d & %d",x ,y);
    return 0;
}
