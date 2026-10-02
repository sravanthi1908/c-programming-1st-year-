#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,amount,CI;
    printf("enter the value of p,r,t : ");
    scanf("%f %f %f",&p,&r,&t);
    amount=p* pow((1+r/100),t);
    CI=amount-p;
    printf("the compound interest is: %f",CI);
    return 0;
}
