#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n],i;
for(int i=0;i<n;i++);
{
scanf("%d",&arr[i]);
}
int max;
for(int i=0;i<n;i++)
{
if(arr[i]>max){
max=arr[i];}
}
printf("largest= %d",max);
return 0;
}

