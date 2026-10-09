#include<stdio.h>
int main()
{
 int mark1,mark2,M=0;
 
 scanf("%d%d",&mark1,&mark2);
 M=(mark1+mark2)/2;
 
 if (M<=100 && M>=80)
 {
   printf("Grade =A");
 }
 else if (M=80 && M<=60)
 { 
   printf("Grade B");
 }
 else (M=60 && M<=40);
 {
   printf("Grade C");
 }
 return 0;
} 
