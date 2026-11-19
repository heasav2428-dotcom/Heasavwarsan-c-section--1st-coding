#include<stdio.h>
int main()
{
int n,found=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);}
int key,i;
scanf("%d",&key);

for (int i=0;i<n;i++)
{
if(a[i]==key)
{
 found=1;
printf("it is found index=%d",i);
break;}
}
if(found==0)
{printf("not found=%d",i);}

return 0;
}


