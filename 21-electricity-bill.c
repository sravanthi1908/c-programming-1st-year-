#include<stdio.h>
int main()
{
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    if(n<=100)
        printf("your electricity bill is 5/units");
    else if(n>100 && n<200)
        printf("your electricity bill is 10/units");
    else
        printf("your electricity bill is 20/units");
    return 0;
}
