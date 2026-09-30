#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a=9=b && b==c && a==c)
        printf("it is an equilateral triangle");
    else if(a==b || b==c || c==a)
        printf("it is an isosceles triangle");
    else
        printf("it is a scalene triangle");
    return 0;
}
