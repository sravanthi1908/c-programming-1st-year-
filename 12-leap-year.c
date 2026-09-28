#include<stdio.h>
int main()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0)
      printf("the year %d is leap year",n);
    else
        printf("the year %d is not a leap year");
    return 0;
}
