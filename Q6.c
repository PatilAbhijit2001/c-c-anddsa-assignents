#include <stdio.h>
    int main()
    {
        //here we use char data type for store character ,[10]  for the full name
        char a[10];
        printf("Enter the name\n");
        //%s for printing and storing the string of name 
        scanf("%s", &a);
        printf("\"Hello ,%s\"",a);
        return 0;
    }