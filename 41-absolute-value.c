#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    if(n<0)
        n=-n;
    printf("the absolute value of n is: %d",n);
    return 0;
}
