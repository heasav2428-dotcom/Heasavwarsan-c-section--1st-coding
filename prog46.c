//programe for user defined function
#include<stdio.h>

int sub(int a, int b)
{printf("%d",a-b);
}
int main()
{
 int a,b;
 scanf("%d%d", &a,&b);
  sub(a,b);
}
int checkAandB(int x, int y){
printf("%d",x==y);
}
int main()
{ 
 int a,b;
 scanf("%d%d",&a,&b);
 checkAandB(x,y);
 
  return 0;
 }

