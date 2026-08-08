#include <stdio.h>

int main() {
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("Double : %d\n",x*2);
    printf("remainder : %d\n",x%2);
    printf("Greater than 10 : %d \n",x>10);
    printf("if x is between 5 and 20 : %d\n",5<x&&x<20);
    printf("if no. is 0 or greater than 50 : %d\n",x==0||x>50);
    printf("if x is not equals to 5 : %d\n",x!=5);
    printf("if no. is even=0 or odd=1 : %d",x&1);
    return 0;
}
