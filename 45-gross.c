#include<stdio.h>
int main()
{
    float basic,hdr,da,gross;
    printf("enter the values : ");
    scanf("%f %f %f",&basic,&hdr,&da);
    hdr=basic*hdr/100;
    da=basic*da/100;
    gross=basic+hdr+da;
    printf("the gross value is : %f ",gross);
    return 0;
}
