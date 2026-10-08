#include<stdio.h>
int main()
{
    float km,miles;
    printf("enter the kilometers: ");
    scanf("%f",&km);
    miles=0.6213*km;
    printf("miles=%f",miles);
    return 0;
}
