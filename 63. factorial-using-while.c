#include<stdio.h>
int main()
{
    int i, product=1, n;
    printf("enter any number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        product=product*i;
        i++;
    }
    printf("the factorial of %d is= %d",n, product);
    return 0;
}
