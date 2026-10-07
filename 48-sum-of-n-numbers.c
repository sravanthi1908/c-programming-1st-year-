#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter the n value :");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
        sum=sum+i;
    printf("the sum of %d numbers is: %d",n,sum);
    return 0;
}
