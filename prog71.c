#include<stdio.h>
 int main(){
 FILE *fp1,*fp2;
 char ch;
 fp1=fopen("data.txt","r");
 fp2=fopen("copy.txt","w");
 while((ch=fget(fp1) !=EOF)
 {
   fputch(ch,fp2);
   }
   printf("File copied successfully");
   fclose(fp1);
   fclose(fp2);
   return 0;
   }
 
