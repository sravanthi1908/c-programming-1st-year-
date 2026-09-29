#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the percentages:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=90)
        printf(" %d you got 'A' grade\n",a);
    else if(a>80 && a<90)
      printf(" %d you got 'B' grade\n",a);
    else
        printf(" %d you got 'C' grade\n",a);

    if(b>=90)
        printf(" %d you got 'A' grade\n",b);
    else if(b>=80 && b<90)
        printf(" %d you got 'B' grade\n",b);
    else
        printf(" %d you got 'c' grade\n",b);

     if(c>=90)
        printf(" %d you got 'A' grade\n",c);
     else if(c>=80 && c<90)
        printf(" %d you got 'B' grade\n",c);
     else
        printf(" %d you got 'C' grade\n",c);
     return 0;
}
