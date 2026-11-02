#include <stdio.h>
int main()
{
  int a;
    printf("Enter the age : ");
    scanf("%d",&a);
    if (a>=18)
        printf("Eligible for driving");
    else
        printf("Not eligible for driving");
    
    return 0;
}
