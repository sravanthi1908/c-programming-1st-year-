#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter any two numbers:");
    scanf("%d %d",&a,&b);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("enter your choice number:",choice);
    scanf(" %d",&choice);
     switch(choice)
     {
         case 1:
             printf(" Addition=%d",a+b);
             break;
         case 2:
             printf("Subtraction=%d",a-b);
             break;
         case 3:
             printf("Multiplication=%d",a*b);
             break;
         case 4:
             if(b!=0)
                printf("Division= %d",a/b);
             else
                printf("Division by zero is not allowed");
             break;
         default:
             printf("invalid choice");
         return 0;
     }
}
