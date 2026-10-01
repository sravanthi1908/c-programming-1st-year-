//to check in which quadrant the point is located//
#include<stdio.h>
int main()
{
    int x,y;
    printf("ENTER THE VALUES : ");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
        printf("the point (%d , %d) is in first quadrant\n",x,y);
    else if(x<0 && y>0)
        printf("the point (%d , %d) is in second quadrant\n",x,y);
    else if(x<0 && y<0)
        printf("the point (%d , %d) is in third quadrant\n",x,y);
    else
        printf("the point (%d , %d) is in fourth quadrant\n",x,y);
    return 0;
}
