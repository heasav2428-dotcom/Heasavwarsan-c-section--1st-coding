#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d%d",&x,&y);
 
 switch (x,y)
 {
 case 1: printf("Addition=%d",x+y);
         break;
 
 case 2: printf("Subraction=%d",x-y);
         break;
 
 case 3: printf("Multiplication=%d",x*y);
         break;
 
 case 4: printf("Division=%d",x/y);
         break;
 
 case 5: printf("Module=%d",x%y);
         break;
  
 default: printf("Enter invalid value");
 }
 return 0;
}
