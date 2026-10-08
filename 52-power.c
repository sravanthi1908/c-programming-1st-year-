#include<stdio.h>
#include<math.h>
int main()
{
  int base,expo,result;
  printf("enter base, expo:");
  scanf("%d %d",&base,&expo);
  result=pow(base,expo);
  printf("power:%d",result);
  return 0;
}
