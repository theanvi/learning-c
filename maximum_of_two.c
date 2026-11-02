#include <stdio.h>
int main()
{
   float a;
    printf("Enter a number : ");
    scanf("%f",&a);
    float b;
    printf("Enter a number : ");
    scanf("%f",&b);
    if (a>b)
       printf("a is maximum");
    else if (a == b)
        printf("Both numbers are equal");
    else
       printf("b is maximum");
    
    return 0;

}
