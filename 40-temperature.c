#include<stdio.h>
int main()
{
    int n;
    printf("enter the temperature value:");
    scanf("%d",&n);
    if(n>=20 && n<=25)
        printf("the temperature is normal");
    else if(n<20)
        printf("the temperature is cooler");
    else
        printf("the temperature is warmer");
    return 0;
}
