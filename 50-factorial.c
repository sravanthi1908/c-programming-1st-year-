#include<stdio.h>
int main()
{
    int n,s=1;
    printf("enter the n value:");
    scanf("%d",&n);
    for( int  i=1; i<=n; i++)
     s=s*i;
    printf("the factorial of %d is : %d",n,s);
    return 0;
}
