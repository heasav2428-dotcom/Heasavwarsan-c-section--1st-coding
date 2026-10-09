#include<stdio.h>
int main()
{
 int a,b,c,x=0,y=0,z=0;
 scanf("%d%d%d",&a,&b,&c);
 printf("Total number of copies=%d",a);
 
 printf("\nSelling price for copies=%d",b);
 
 printf("\nCost price for copies=%d",c);
 
 x=b-c;
 
 printf("\nprofit for a copies=%d",x);
 
 y=x*a;

 z=y-100;
 
 printf("\nTotal profit on sunday=%d",z);
 return 0;
 
}
