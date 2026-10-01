#include<stdio.h>
int main()
{
    int a,b,c,discriminant;
    printf("enter the the values :");
    scanf("%d %d %d",&a,&b,&c);
     discriminant = b*b-4*a*c;
    if(discriminant>0)
        printf("the quadratic roots are real");
    else if(discriminant=0)
        printf("the quadratic roots are equal");
    else
        printf("the quadratic roots are imaginary");
    return 0;
}
