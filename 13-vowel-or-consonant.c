#include<stdio.h>
int main()
{
    char n;
    printf("enter the character:");
    scanf("%c",&n);
    if(n>='a'&&n<='z')
        printf("the character %c is alphabet",n);
    else
        printf("the character %c is consonant",n);
    return 0;
}
