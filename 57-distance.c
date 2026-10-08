#include<stdio.h>
int main()
{
    int distance,speed,time;
    printf("enter speed, time:");
    scanf("%d %d",&speed,&time);
    distance=speed*time;
    printf("distance=%d",distance);
    return 0;
}
