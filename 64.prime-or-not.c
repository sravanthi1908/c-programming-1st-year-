#include<stdio.h>
void main()
{
    int i,n,count;
    count=0;
    printf("enter n value:");
    scanf("%d\n",&n);
    for(i=1; i<=n; i++);
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("the given number %d is a prime number\n");
    }
    else
    {
        printf("the given number %d is not a prime number");
    }
}
