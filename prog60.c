#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
int sum=0,m;
for(int i=0;i<n;i++)
{
  if (a[i]>=0)
   { 
  sum=sum+a[i]  ;
}
 printf("total of all positive number = %d",sum);
 return 0;
}
}
