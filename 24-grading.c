#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,total,percentage;
    printf("enter the marks of for subjects :");
    scanf("%d %d %d %d",&sub1,&sub2,&sub3,&sub4);
    total = sub1+sub2+sub3+sub4;
    printf("the total marks you obtained is : %d\n",total);
    percentage=(total/400.0)*100;
    printf("the percentage of your marks is: %d\n",percentage);
    return 0;
