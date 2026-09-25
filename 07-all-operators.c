#include<stdio.h>
int main()
{
    int a,b,sum,sub,div,mul,mod;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    sub=a-b;
    printf("sub=%d\n",sub);
    mul=a*b;
    printf("mul=%d\n",mul);
    div=a/b;
    printf("div=%d\n",div);
    mod=a%b;
    printf("mod=%d\n",mod);
    return 0;
}
