#include<stdio.h>
int main()
{
    int P,T,R,SI;
    printf("enter the values:");
    scanf("%d %d %d",&P,&T,&R);
    SI=(P*T*R)/100;
    printf("the simple interest is:%d",SI);
    return 0;
}
