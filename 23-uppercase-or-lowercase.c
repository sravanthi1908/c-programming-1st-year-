#include<stdio.h>
int main()
{
    char a;
    printf("enter the character:");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("the character is uppercase letter");
    else
        printf("the character is lowercase letter");
    return 0;
}
