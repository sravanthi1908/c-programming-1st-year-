#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,result1;
    float result2;
    printf("enter the values:");
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
    result1=a+b*c+(d*e)+f*g;
    printf("the result is:%d\n",result1);
    result2=(a/b)*c-b+a*(d/3.00);
    printf("the result is:%f",result2);
    return 0;
}
