#include <stdio.h>
int main()
{
    float p;
    printf ("Enter the principal amount :  ");
    scanf("%f",&p);
    float r;
    printf("Enter the rate interest : ");
    scanf("%f",&r);
    float t;
    printf("Enter the Time : ");
    scanf("%f",&t);
    float simple_interest;
    simple_interest=(p*r*t)/100;
    printf("The simple interest is : %f",simple_interest);
    return 0;

}
