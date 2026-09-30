#include<stdio.h>
int main()
{
    float cp,sp,profit,loss,amount;
    printf("enter the values:");
    scanf("%f %f",&cp,&sp);
    if(sp>cp)
    {
        amount=sp-cp;
      printf("you got profit %f",amount);
    }
    else if(cp>sp)
     {
     amount=cp-sp;
    printf("you got loss %f",amount);
     }
    else
      {
          printf("no profit nor loss");
      }
    return 0;
