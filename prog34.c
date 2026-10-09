#include<stdio.h>
int main()
{

 int M;
 scanf("%d",&M);
 
 if (M>=90 && M<=100)
  {
    printf("A grade");
  }
  
 else if(M<90 && M>=70)
  {
    printf("B grade");
  }
  
 else if (M<70 && M>=50)
  {
    printf("C grade");
  }
  
 else(M<50 && M<=0);
  {
    printf("D grade");
  }
 
 return 0;
 
}
  
