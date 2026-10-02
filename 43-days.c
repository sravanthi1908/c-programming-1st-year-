#include<stdio.h>
int main()
{
    int n;
    float weeks,years,months;
    printf("enter the no.of days : ");
    scanf("%d",&n);
    weeks=n/7;
    months=n/30;
    years=n/365;
    printf("the no.of weeks = %f\n",weeks);
    printf("the no.of months = %f\n",months);
    printf("the no.of years = %f\n",years);
    return 0;
}
