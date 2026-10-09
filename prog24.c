#include<stdio.h>
int main()
{
 float bill=1000,discount=30,discount_price,total_bill;
 discount_price=(bill*discount)/100;
 total_bill=bill-discount_price;
 printf("%.2f",total_bill);
 return 0;
}
