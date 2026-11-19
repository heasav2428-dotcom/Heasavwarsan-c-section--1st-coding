#include<stdio.h>
int main(){
 int a,sum=0,count=0,b;
 scanf("%d",&a);
while(a!=0){
    b=a%10;
  sum = sum+b;
     count++;
     a=a/10;
     }
     
   printf("%d  %d",count,sum);
   return 0;
 }
