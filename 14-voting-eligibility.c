#include<stdio.h>
int main()
{
    int n;
    printf("enter the age:");
    scanf("%d",&n);
    if(n>=18)
        printf("you are eligible for voting");
    else
        printf("you are not eligible for voting");
    return 0;
}
